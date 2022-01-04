# User config
set ::env(DESIGN_NAME) top

# Change if needed
set ::env(FP_PIN_ORDER_CFG) $::env(DESIGN_DIR)/pin_order.cfg
set ::env(VERILOG_FILES) [glob $::env(DESIGN_DIR)/src/*.v]

# Fill this
set ::env(CLOCK_PERIOD) "10.0"
set ::env(CLOCK_PORT) "clk"
set ::env(PL_TARGET_DENSITY) "0.45"

# CORE_UTIL not used if FP_SIZING is absolute
set ::env(FP_SIZING) absolute
set ::env(DIE_AREA) "0 0 700 1400"

set ::env(DESIGN_IS_CORE) "0"
set ::env(DIODE_INSERTION_STRATEGY) 3

set ::env(SYNTH_STRATEGY) "DELAY 0"
set ::env(SYNTH_SIZING) 1

# Increase the number of cores used for routing
set ::env(ROUTING_CORES) "4"

set filename $::env(DESIGN_DIR)/$::env(PDK)_$::env(STD_CELL_LIBRARY)_config.tcl
if { [file exists $filename] == 1} {
	source $filename
}

