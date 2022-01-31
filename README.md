# ECC memory controller test for RISC-V processor with Tilelink Peripherals
This repository contains the setup to test the [ECC memory controller generator](https://github.com/msvisser/memory-controller-generator) in combinartion with a [RISC-V core](https://github.com/msvisser/riscv-tilelink) and some Tilelink peripherals.

## Setup
Using this repository requires the following programs to be installed:
- `python3`
- `yosys` (version 0.10)
- `make`
- `g++`
- [`parallel`](https://www.gnu.org/software/parallel/) (Arch Linux: [parallel](https://archlinux.org/packages/community/any/parallel/))
- `riscv64-elf-gcc` (Arch Linux: [riscv64-elf-gcc](https://archlinux.org/packages/community/x86_64/riscv64-elf-gcc/))
- `riscv64-elf-{as,ld,objcopy}` (Arch Linux: [riscv64-elf-binutils](https://archlinux.org/packages/community/x86_64/riscv64-elf-binutils/))

The CXXRTL simulation also requires the following libraries to be installed:
- [`argparse`](https://github.com/p-ranav/argparse) (Arch Linux AUR: [argparse](https://aur.archlinux.org/packages/argparse/))
- [`fmt`](https://github.com/fmtlib/fmt) (Arch Linux: [fmt](https://archlinux.org/packages/extra/x86_64/fmt/))

The python virtual environment can be installed using the following commands. This will automatically install all the required python packages.
```shell
# Create a python environment
python3 -m venv .env
source .env/bin/activate
# Install all dependencies
pip3 install -r requirements.txt
```

## Usage
Before running the test system generator, make sure you have activated the virtual environment.
This can be done by running the following command.
```shell
# Enable the python virtual environment
source .env/bin/activate
```

Simulation firmware can be built using the following commands. This will automatically build two versions of the [CoreMark](https://www.eembc.org/coremark/) benchmark and a simple test program.
```shell
# Go to the firmware directory
cd firmware
# Build all the firmware
make
```

With the virtual environment enabled you can now run a simulation using the following commands.
```shell
# Go to the simulation test directory
cd simulation/test
# Build the simulation with the Extended Hamming code and write-back controller
make

# Run the simulation without any errors
./simulation ../../firmware/coremark-perf.bin --stdout
# Run the simulation with errors
./simulation ../../firmware/coremark-perf.bin --stdout --lambda 0.0001 --seed 0 --double-rate 0 --max-cycles 5100000
```


