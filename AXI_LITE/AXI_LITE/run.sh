#!/bin/bash

# Exit immediately if a command fails
set -e

# Module & file definitions
TOP_MODULE="tb_axi_lite"
DESIGN_FILE="axi_lite_slave.v"
TB_FILE="tb_axi_lite.v"

echo "----------------------------------------"
echo " Running Verilator Build...             "
echo "----------------------------------------"

# Compile both Verilog files into a simulation binary
verilator --binary --timing --trace -Wall -Wno-fatal \
    --top-module ${TOP_MODULE} \
    ${DESIGN_FILE} ${TB_FILE} \
    -Mdir obj_dir

echo "----------------------------------------"
echo " Executing Simulation...                "
echo "----------------------------------------"

# Run the compiled executable
./obj_dir/V${TOP_MODULE}

echo "----------------------------------------"
echo " Checking Waveforms...                  "
echo "----------------------------------------"

# Launch GTKWave if a VCD dump file was created by the testbench
if [ -f "dump.vcd" ]; then
    echo "Launching GTKWave..."
    gtkwave dump.vcd &
elif [ -f "${TOP_MODULE}.vcd" ]; then
    echo "Launching GTKWave..."
    gtkwave ${TOP_MODULE}.vcd &
else
    echo "Simulation finished. No .vcd file found."
    echo "To view waveforms, ensure \$dumpfile(\"dump.vcd\"); and \$dumpvars; are in ${TB_FILE}."
fi

