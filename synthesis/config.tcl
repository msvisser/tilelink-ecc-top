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
set ::env(CLOCK_PERIOD) "15.0"
set ::env(CLOCK_PORT) "clk"
set ::env(PL_TARGET_DENSITY) "0.30"

# CORE_UTIL not used if FP_SIZING is absolute
set ::env(FP_SIZING) absolute
# set ::env(DIE_AREA) "0 0 2920 3520"
set ::env(DIE_AREA) "0 0 2500 1700"

set ::env(FP_PDN_VPITCH) 30
set ::env(FP_PDN_HPITCH) 30
set ::env(DIODE_INSERTION_STRATEGY) 5

set ::env(QUIT_ON_ILLEGAL_OVERLAPS) 0
set ::env(QUIT_ON_LVS_ERROR) 0

set filename $::env(DESIGN_DIR)/$::env(PDK)_$::env(STD_CELL_LIBRARY)_config.tcl
if { [file exists $filename] == 1} {
	source $filename
}

