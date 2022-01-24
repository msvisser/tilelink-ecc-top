# User config
set ::env(DESIGN_NAME) top

# Change if needed
set ::env(MACRO_PLACEMENT_CFG) $::env(DESIGN_DIR)/macro_placement.cfg
set ::env(FP_PIN_ORDER_CFG) $::env(DESIGN_DIR)/pin_order.cfg
set ::env(VERILOG_FILES) [glob $::env(DESIGN_DIR)/src/*.v]
set ::env(VERILOG_FILES_BLACKBOX) [glob $::env(DESIGN_DIR)/bb/*.v]
set ::env(EXTRA_LEFS) [glob $::env(DESIGN_DIR)/bb/*.lef]
set ::env(EXTRA_GDS_FILES) [glob $::env(DESIGN_DIR)/bb/*.gds]

# Fill this
set ::env(CLOCK_PERIOD) "10.0"
set ::env(CLOCK_PORT) "clk"
set ::env(PL_TARGET_DENSITY) "0.45"
set ::env(PL_ROUTABILITY_DRIVEN) 1
set ::env(GLB_RT_ADJUSTMENT) 0.05

# CORE_UTIL not used if FP_SIZING is absolute
set ::env(FP_SIZING) absolute
# 32 set ::env(DIE_AREA) "0 0 1750 1500"
# 33 set ::env(DIE_AREA) "0 0 1750 1500"
# 38 set ::env(DIE_AREA) "0 0 1900 1500"
# 39 set ::env(DIE_AREA) "0 0 1900 1500"
# 40 set ::env(DIE_AREA) "0 0 1900 1500"

set ::env(FP_PDN_VPITCH) 50
set ::env(DIODE_INSERTION_STRATEGY) 5

set ::env(SYNTH_STRATEGY) "DELAY 0"
set ::env(SYNTH_SIZING) 1
set ::env(IO_PCT) 0.06

set ::env(RUN_KLAYOUT_XOR) 0

set filename $::env(DESIGN_DIR)/$::env(PDK)_$::env(STD_CELL_LIBRARY)_config.tcl
if { [file exists $filename] == 1} {
	source $filename
}

