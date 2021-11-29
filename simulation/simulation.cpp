#include <fstream>
#include <chrono>
#include <random>
#include <backends/cxxrtl/cxxrtl_vcd.h>
#include <argparse/argparse.hpp>
#include <fmt/core.h>
#include "tilelink_soc.h"

// Simulation model
static cxxrtl_design::p_top top;

// Simulation parameters
static bool vcd_enabled = false;
static size_t seed = 0;
static double lambda = 0.0;

// VCD writer
static cxxrtl::vcd_writer vcd;
static std::ofstream waves;
static size_t steps = 0;


namespace cxxrtl_design {

template<size_t DATA_WIDTH>
struct bb_p_memory_impl : public bb_p_sim__dmem<DATA_WIDTH> {
    static constexpr size_t num_cells = 8192;
    static constexpr size_t num_bits = DATA_WIDTH;

    size_t memory[num_cells];
    size_t memory_flips[num_cells];
    size_t read_accesses[num_cells];
    size_t write_accesses[num_cells];

    size_t errors_injected[num_cells];
    size_t read_with_errors[num_cells][num_bits];

    std::mt19937_64 generator;
    std::poisson_distribution<size_t> num_flips;
    std::uniform_int_distribution<size_t> memory_cell;
    std::uniform_int_distribution<size_t> memory_bit;

    bb_p_memory_impl() {
        generator = std::mt19937_64(seed);
        num_flips = std::poisson_distribution<size_t>(lambda);
        memory_cell = std::uniform_int_distribution<size_t>(0, num_cells - 1);
        memory_bit = std::uniform_int_distribution<size_t>(0, num_bits - 1);
    }

    bool eval() override {
        if (this->posedge_p_clk()) {
            if (this->p_clk__en.template get<bool>()) {
                size_t addr = this->p_addr.template get<size_t>();
                bool write_en = this->p_write__en.template get<bool>();

                if (write_en) {
                    size_t value = this->p_write__data.template get<size_t>();
                    // fmt::print(stderr, "write mem[{}] = {:010x}\n", addr, value);
                    write_accesses[addr]++;
                    memory[addr] = value;
                    memory_flips[addr] = 0;
                } else {
                    // fmt::print(stderr, "read mem[{}] = {:010x} ({:010x} -> {:010x})\n", addr, memory[addr], memory_flips[addr], memory[addr] ^ memory_flips[addr]);
                    read_accesses[addr]++;

                    size_t current_flips = std::__popcount(memory_flips[addr]);
                    read_with_errors[addr][current_flips]++;

                    if (current_flips > 1) {
                        fmt::print(stderr, "reading mem[{}] with {} flips\n", addr, current_flips);
                    }

                    this->p_read__data.next.template set<size_t>(memory[addr]);
                }
            }
        } else if (this->negedge_p_clk()) {
            size_t flips = num_flips(generator);
            while(flips--) {
                size_t cell = memory_cell(generator);
                size_t bit = memory_bit(generator);

                memory[cell] ^= (1ull << bit);
                memory_flips[cell] ^= (1ull << bit);

                errors_injected[cell]++;
                // fmt::print(stderr, "flipped {}:{}\n", cell, bit);
            }
        }
        return bb_p_sim__dmem<DATA_WIDTH>::eval();
	}

    void reset() override {}
};

template<>
std::unique_ptr<bb_p_sim__dmem<39>> bb_p_sim__dmem<39>::create(std::string, metadata_map, metadata_map) {
    return std::make_unique<bb_p_memory_impl<39>>();
}

}

// Flip the clock high and low
void clk() {
    top.p_clk.set<bool>(true);
    top.step();

    if (vcd_enabled) {
        vcd.sample(steps);
        steps += 5;
    }

    top.p_clk.set<bool>(false);
    top.step();

    if (vcd_enabled) {
        vcd.sample(steps);
        steps += 5;
    }
}

int main(int argc, char *argv[]) {
    argparse::ArgumentParser program(argv[0]);

    program.add_argument("firmware")
        .help("simulation firmware for RISC-V processor");

    program.add_argument("--vcd")
        .help("enable VCD dumping during simulation")
        .default_value(false)
        .implicit_value(true);

    program.add_argument("-m", "--max-cycles")
        .help("maximum number of clock cycles to simulate")
        .scan<'u', size_t>()
        .default_value(std::numeric_limits<size_t>::max());

    program.add_argument("-s", "--seed")
        .help("simulation randomness seed")
        .scan<'u', size_t>()
        .default_value((size_t) 0);

    program.add_argument("-l", "--lambda")
        .help("simulation error injection frequency (poisson lambda)")
        .scan<'g', double>()
        .default_value(0.0);

    try {
        program.parse_args(argc, argv);
    } catch (const std::runtime_error& err) {
        std::cout << err.what() << std::endl;
        std::cout << program;
        exit(0);
    }

    vcd_enabled = program.get<bool>("--vcd");
    lambda = program.get<double>("--lambda");
    seed = program.get<size_t>("--seed");

    // Initialize the top module
    top = cxxrtl_design::p_top();

    if (vcd_enabled) {
        // debug_items maps the hierarchical names of signals and memories in the design
        // to a cxxrtl_object (a value, a wire, or a memory)
        cxxrtl::debug_items all_debug_items;

        // Load the debug items of the top down the whole design hierarchy
        top.debug_info(all_debug_items, "top ");

        // vcd_writer is the CXXRTL object that's responsible of creating a string with
        // the VCD file contents.
        vcd.timescale(1, "ns");

        // Here we tell the vcd writer to dump all the signals of the design, except for the
        // memories, to the VCD file.
        //
        // It's not necessary to load all debug objects to the VCD. There is, for example,
        // a  vcd.add(<debug items>, <filter>)) method which allows creating your custom filter to decide
        // what to add and what not.
        vcd.add_without_memories(all_debug_items);
        // vcd.add(all_debug_items);

        waves = std::ofstream("waves.vcd");
    }

    // Open the firmware input file
    auto firmware_path = program.get<std::string>("firmware");
    // TODO: Can open ifstream of directory, which does not error
    std::ifstream input(firmware_path, std::ios::binary | std::ios::in);
    if (!input.is_open()) {
        fmt::print(stderr, "Unable to open firmware file '{}'\n", firmware_path);
        return 1;
    }

    // Read the complete instruction memory from the file
    size_t i;
    for (i = 0; i < top.memory_p_tl__rom_2e_memory.depth(); i++) {
        uint32_t data = 0;
        size_t j = 0;
        while (j < 4) {
            uint8_t byte = input.get();
            if (input.eof()) break;
            data |= byte << (j * 8);
            j++;
        }
        if (input.eof() && j == 0) break;
        top.memory_p_tl__rom_2e_memory[i].set<uint32_t>(data);
    }
    fmt::print(stderr, "Loaded {} words from firmware file '{}'\n", i, firmware_path);

    // Get the simulation starting time
    auto start_time = std::chrono::steady_clock::now();

    // Initialize the clock
    top.p_clk.set<bool>(false);
    top.step();
    if (vcd_enabled) {
        vcd.sample(0);
    }

    size_t clk_cycle = 0;
    size_t max_cycles = program.get<size_t>("--max-cycles");
    while (clk_cycle < max_cycles) {
        clk();

        // If the debug output port is valid, print an output character
        if (top.p_output__valid.get<bool>()) {
            char c = top.p_output.get<unsigned char>();
            fmt::print("{}", c);
        }

        // Stop the simulation if halt_simulator is asserted
        if (top.p_halt__simulator.get<bool>()) {
            fmt::print(stderr, "Stopping simulator after {} cycles\n", clk_cycle);
            break;
        }

        if (vcd_enabled && clk_cycle % 100000 == 0) {
            waves << vcd.buffer;
            vcd.buffer.clear();
        }

	    clk_cycle++;
    }

    top.p_clk.set<bool>(false);
    top.step();

    if (vcd_enabled) {
        vcd.sample(steps);
        steps += 5;

        waves << vcd.buffer;
        vcd.buffer.clear();
    }

    auto finish_time = std::chrono::steady_clock::now();

    std::chrono::duration<double> diff = finish_time - start_time;
    fmt::print(stderr, "Simulation runtime: {:.3f}s\n", diff.count());

    if (auto p = dynamic_cast<cxxrtl_design::bb_p_memory_impl<39>*>(top.cell_p_tl__ram_2e_memory.get())) {
        size_t total_errors = 0;
        for (size_t i = 0; i < p->num_cells; i++) {
            total_errors += p->errors_injected[i];
        }
        fmt::print(stderr, "total errors injected: {}\n", total_errors);

        size_t total_errors_seen = 0;
        for (size_t i = 0; i < p->num_cells; i++) {
            if (p->read_accesses[i] || p->write_accesses[i]) {
                total_errors_seen += p->errors_injected[i];
                fmt::print(
                    stderr,
                    "{:4d}: r:{:5d} w:{:5d} e:{:5d} rwe:{:5d} {:5d} {:5d}\n",
                    i,
                    p->read_accesses[i],
                    p->write_accesses[i],
                    p->errors_injected[i],
                    p->read_with_errors[i][0],
                    p->read_with_errors[i][1],
                    p->read_with_errors[i][2]
                );
            }
        }
        fmt::print(stderr, "total errors seen: {}\n", total_errors_seen);
    }

    if (clk_cycle == max_cycles) {
        fmt::print("\n");
        fmt::print(stderr, "Maximum number of clock cycles reached\n");
        return 1;
    }

    return 0;
}