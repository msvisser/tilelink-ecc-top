#include <fstream>
#include <chrono>
#include <random>
#include <backends/cxxrtl/cxxrtl_vcd.h>
#include <argparse/argparse.hpp>
#include <fmt/core.h>
#include <fmt/ostream.h>
#include "tilelink_soc.h"

// Simulation model
static cxxrtl_design::p_top top;

// Simulation parameters
static bool vcd_enabled = false;
static bool log_stdout = false;
static size_t seed = 0;
static double lambda = 0.0;
static double double_rate = 0.0;

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
    size_t read_clean[num_cells];
    size_t read_correctable[num_cells];
    size_t read_uncorrectable[num_cells];
    size_t read_undetectable[num_cells];

    bool prev_valid = false;
    size_t prev_addr = 0;

    std::mt19937_64 generator;
    std::poisson_distribution<size_t> num_flips;
    std::uniform_int_distribution<size_t> memory_cell;
    std::uniform_int_distribution<size_t> memory_bit;
    std::uniform_int_distribution<size_t> memory_bit_double;
    std::uniform_real_distribution<double> double_flip;

    bb_p_memory_impl() {
        generator = std::mt19937_64(seed);
        num_flips = std::poisson_distribution<size_t>(lambda);
        memory_cell = std::uniform_int_distribution<size_t>(0, num_cells - 1);
        memory_bit = std::uniform_int_distribution<size_t>(0, num_bits - 1);
        memory_bit_double = std::uniform_int_distribution<size_t>(0, num_bits - 2);
        double_flip = std::uniform_real_distribution<double>(0.0, 1.0);
    }

    bool eval() override {
        if (this->posedge_p_clk()) {
            if (this->p_clk__en.template get<bool>()) {
                size_t addr = this->p_addr.template get<size_t>();
                bool write_en = this->p_write__en.template get<bool>();

                if (write_en) {
                    write_accesses[addr]++;

                    size_t value = this->p_write__data.template get<size_t>();
                    memory[addr] = value;
                    memory_flips[addr] = 0;
                } else {
                    read_accesses[addr]++;

                    this->p_read__data.next.template set<size_t>(memory[addr]);
                    prev_valid = true;
                    prev_addr = addr;
                }
            }
        } else if (this->negedge_p_clk()) {
            // Check if there was a read on the positive edge
            if (prev_valid) {
                // Get the error and uncorrectable error lines passed back from the controller
                bool error = this->p_error.template get<bool>();
                bool uncorrectable_error = this->p_uncorrectable__error.template get<bool>();

                // Update the read counters for this location
                if (error && uncorrectable_error) {
                    read_uncorrectable[prev_addr]++;
                } else if (error) {
                    read_correctable[prev_addr]++;
                } else if (memory_flips[prev_addr] != 0) {
                    read_undetectable[prev_addr]++;
                } else {
                    read_clean[prev_addr]++;
                }

                prev_valid = false;
            }

            // Determine the number of flips to apply
            size_t flips = num_flips(generator);
            while(flips--) {
                // Determine the cell to flip
                size_t cell = memory_cell(generator);

                // Determine if this is a double flip
                double flip_two = double_flip(generator);
                if (flip_two < double_rate) {
                    // Flip two adjacent bits
                    size_t bit = memory_bit_double(generator);
                    memory[cell] ^= (3ull << bit);
                    memory_flips[cell] ^= (3ull << bit);
                    errors_injected[cell] += 2;
                } else {
                    // Flip a single bit
                    size_t bit = memory_bit(generator);
                    memory[cell] ^= (1ull << bit);
                    memory_flips[cell] ^= (1ull << bit);
                    errors_injected[cell]++;
                }
            }
        }
        return bb_p_sim__dmem<DATA_WIDTH>::eval();
	}

    void reset() override {}

    void log(std::ostream &stderr_log) {
        size_t total_errors = 0;
        for (size_t i = 0; i < this->num_cells; i++) {
            total_errors += this->errors_injected[i];
        }
        fmt::print(stderr_log, "total errors injected: {}\n", total_errors);

        size_t locations_touched = 0;
        size_t total_errors_seen = 0;
        size_t clean_reads = 0;
        size_t correctable_reads = 0;
        size_t uncorrectable_reads = 0;
        size_t undetectable_reads = 0;
        for (size_t i = 0; i < this->num_cells; i++) {
            if (this->read_accesses[i] || this->write_accesses[i]) {
                locations_touched++;
                total_errors_seen += this->errors_injected[i];

                fmt::print(
                    stderr_log,
                    "{:4d}: r:{:5d} w:{:5d} e:{:5d} rcl:{:5d} rco:{:5d} ruc:{:5d} rud:{:5d}\n",
                    i,
                    this->read_accesses[i],
                    this->write_accesses[i],
                    this->errors_injected[i],
                    this->read_clean[i],
                    this->read_correctable[i],
                    this->read_uncorrectable[i],
                    this->read_undetectable[i]
                );

                clean_reads += this->read_clean[i];
                correctable_reads += this->read_correctable[i];
                uncorrectable_reads += this->read_uncorrectable[i];
                undetectable_reads += this->read_undetectable[i];
            }
        }
        double touch_percent = 100.0 * (double) locations_touched / (double) num_cells;
        fmt::print(stderr_log, "locations touched: {}/{} {:.2f}%\n", locations_touched, num_cells, touch_percent);
        fmt::print(stderr_log, "total errors seen: {}\n", total_errors_seen);
        fmt::print(stderr_log, "total clean reads: {}\n", clean_reads);
        fmt::print(stderr_log, "total correctable reads: {}\n", correctable_reads);
        fmt::print(stderr_log, "total uncorrectable reads: {}\n", uncorrectable_reads);
        fmt::print(stderr_log, "total undetectable reads: {}\n", undetectable_reads);
    }
};

template<>
std::unique_ptr<bb_p_sim__dmem<32>> bb_p_sim__dmem<32>::create(std::string, metadata_map, metadata_map) {
    return std::make_unique<bb_p_memory_impl<32>>();
}

template<>
std::unique_ptr<bb_p_sim__dmem<33>> bb_p_sim__dmem<33>::create(std::string, metadata_map, metadata_map) {
    return std::make_unique<bb_p_memory_impl<33>>();
}

template<>
std::unique_ptr<bb_p_sim__dmem<38>> bb_p_sim__dmem<38>::create(std::string, metadata_map, metadata_map) {
    return std::make_unique<bb_p_memory_impl<38>>();
}

template<>
std::unique_ptr<bb_p_sim__dmem<39>> bb_p_sim__dmem<39>::create(std::string, metadata_map, metadata_map) {
    return std::make_unique<bb_p_memory_impl<39>>();
}

template<>
std::unique_ptr<bb_p_sim__dmem<40>> bb_p_sim__dmem<40>::create(std::string, metadata_map, metadata_map) {
    return std::make_unique<bb_p_memory_impl<40>>();
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

    program.add_argument("--stdout")
        .help("enable logging to stdout/stderr instead of files")
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

    program.add_argument("-d", "--double-rate")
        .help("simulation adjacent error injection frequency")
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
    log_stdout = program.get<bool>("--stdout");
    lambda = program.get<double>("--lambda");
    double_rate = program.get<double>("--double-rate");
    seed = program.get<size_t>("--seed");

    // Create a stdout and stderr log file
    std::ofstream stdout_of;
    std::streambuf * stdout_buf;
    std::ofstream stderr_of;
    std::streambuf * stderr_buf;

    if (log_stdout) {
        stdout_buf = std::cout.rdbuf();
        stderr_buf = std::cerr.rdbuf();
    } else {
        auto stdout_path = fmt::format("log/{:.0e}-{}-out.txt", lambda, seed);
        stdout_of.open(stdout_path);
        if (!stdout_of.is_open()) {
            fmt::print(stderr, "Unable to open '{}'\n", stdout_path);
            return 1;
        }
        stdout_buf = stdout_of.rdbuf();

        auto stderr_path = fmt::format("log/{:.0e}-{}-err.txt", lambda, seed);
        stderr_of.open(stderr_path);
        if (!stderr_of.is_open()) {
            fmt::print(stderr, "Unable to open '{}'\n", stderr_path);
            return 1;
        }
        stderr_buf = stderr_of.rdbuf();
    }

    std::ostream stdout_log(stdout_buf);
    std::ostream stderr_log(stderr_buf);

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
    fmt::print(stderr_log, "Loaded {} words from firmware file '{}'\n", i, firmware_path);

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
            fmt::print(stdout_log, "{}", c);
        }

        // Stop the simulation if halt_simulator is asserted
        if (top.p_halt__simulator.get<bool>()) {
            fmt::print(stderr_log, "Stopping simulator after {} cycles\n", clk_cycle);
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
    fmt::print(stderr_log, "Simulation runtime: {:.3f}s\n", diff.count());

    if (auto p = dynamic_cast<cxxrtl_design::bb_p_memory_impl<32>*>(top.cell_p_tl__ram_2e_memory.get())) {
        p->log(stderr_log);
    }
    if (auto p = dynamic_cast<cxxrtl_design::bb_p_memory_impl<33>*>(top.cell_p_tl__ram_2e_memory.get())) {
        p->log(stderr_log);
    }
    if (auto p = dynamic_cast<cxxrtl_design::bb_p_memory_impl<38>*>(top.cell_p_tl__ram_2e_memory.get())) {
        p->log(stderr_log);
    }
    if (auto p = dynamic_cast<cxxrtl_design::bb_p_memory_impl<39>*>(top.cell_p_tl__ram_2e_memory.get())) {
        p->log(stderr_log);
    }
    if (auto p = dynamic_cast<cxxrtl_design::bb_p_memory_impl<40>*>(top.cell_p_tl__ram_2e_memory.get())) {
        p->log(stderr_log);
    }

    if (clk_cycle == max_cycles) {
        fmt::print(stdout_log, "\n");
        fmt::print(stderr_log, "Maximum number of clock cycles reached\n");
        return 1;
    }

    return 0;
}
