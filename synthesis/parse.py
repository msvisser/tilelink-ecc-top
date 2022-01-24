import csv
import matplotlib.pyplot as plt
import numpy as np

design_name_prefix = "/openlane/designs/"

total_memory_area = {
    32: 1791098.74,
    33: 1814797.96,
    38: 1947054.53,
    39: 1969875.60,
    40: 1995553.08,
}

CONTROLLERS = ["BasicController", "WriteBackController", "RefreshController"]
CODES = ["IdentityCode", "ParityCode", "HammingCode", "ExtendedHammingCode", "HsiaoCode", "HsiaoConstructedCode", "DuttaToubaCode", "SheLiCode"]
CODE_BITS = [32, 33, 38, 39, 39, 39, 39, 40]


with open('all.csv') as infile:
    reader = csv.DictReader(infile, delimiter=',', quotechar='"')

    design_dict = {}

    for row in reader:
        design = row['design'][len(design_name_prefix):]
        design_dict[design] = row

    # for controller in CONTROLLERS:
    #     for code, bits in zip(CODES, CODE_BITS):
    #         design = f"{controller}-{code}"
    #         if design not in design_dict:
    #             print(f"{design:45} missing results")
    #             continue
    #         row = design_dict[design]
    #         clk_freq = float(row['suggested_clock_frequency'])
    #         clk_period = float(row['suggested_clock_period'])
    #         synth_area = float(row['synthesis_area_um^2'])
    #         area = int(row['resizer_area_um^2'])
    #         power = float(row['power_W']) * 1000.0
    #         print(f"{design:45} {clk_freq:.2f} MHz  {clk_period:.2f} ns  {synth_area:9.3f} um^2  {area:9.2f} um^2  {power:.2f} mW")
    #     print()


CONTROLLERS = ["BasicController", "WriteBackController", "RefreshController"]
CODES = ["IdentityCode", "ParityCode", "HammingCode", "ExtendedHammingCode", "HsiaoCode", "HsiaoConstructedCode", "DuttaToubaCode", "SheLiCode"]
CODE_BITS = [32, 33, 38, 39, 39, 39, 39, 40]

fig_freq, ax_freq = plt.subplots()
fig_crit, ax_crit = plt.subplots()
fig_area, ax_area = plt.subplots()
fig_die_area, ax_die_area = plt.subplots()
fig_power, ax_power = plt.subplots()

for ci, controller in enumerate(CONTROLLERS):
    freqs = []
    crits = []
    areas = []
    levels = []
    die_areas = []
    powers = []

    for code, bits in zip(CODES, CODE_BITS):
        design = f"{controller}-{code}"
        if design not in design_dict:
            print(design, "missing results")
            freqs.append(0)
            crits.append(0)
            areas.append(0)
            levels.append(0)
            die_areas.append(0)
            powers.append(0)
            continue
        row = design_dict[design]
        clk_freq = float(row['suggested_clock_frequency'])
        clk_period = float(row['suggested_clock_period'])
        synth_area = float(row['synthesis_area_um^2'])
        area = int(row['resizer_area_um^2']) - total_memory_area[bits]
        level = int(row['level'])
        die_area = float(row['DIEAREA_mm^2']) * 1_000_000
        power = float(row['power_W']) * 1_000

        print(f"{design:50} {clk_freq:.2f} MHz  {clk_period:.2f} ns  {synth_area:9.3f} um^2  {area:9.3f} um^2  {die_area:.3f} um^2  {power:5.2f} mW")

        freqs.append(clk_freq)
        crits.append(clk_period)
        areas.append(area)
        levels.append(level)
        die_areas.append(die_area)
        powers.append(power)

    w = 0.9 / len(CONTROLLERS)
    xs = np.arange(len(CODES)) - (((len(CONTROLLERS)-1)/2) * w) + w*ci
    ax_freq.bar(xs, freqs, width=w)
    ax_crit.bar(xs, crits, width=w)
    ax_area.bar(xs, areas, width=w)
    ax_die_area.bar(xs, die_areas, width=w)
    ax_power.bar(xs, powers, width=w)

    print()

xs = np.arange(len(CODES))

ax_freq.set_xticks(xs, labels=CODES, rotation=30, ha="right", rotation_mode="anchor")
ax_freq.yaxis.grid(True)
ax_freq.set_ylabel("Frequency (MHz)")
ax_freq.legend(CONTROLLERS, loc="lower right")
fig_freq.tight_layout()
fig_freq.savefig(f"tapeout-system-freqency.pdf")

ax_crit.set_xticks(xs, labels=CODES, rotation=30, ha="right", rotation_mode="anchor")
ax_crit.yaxis.grid(True)
ax_crit.set_ylabel("Time (ns)")
ax_crit.legend(CONTROLLERS, loc="lower right")
fig_crit.tight_layout()
fig_crit.savefig(f"tapeout-system-critical_path.pdf")

ax_area.set_xticks(xs, labels=CODES, rotation=30, ha="right", rotation_mode="anchor")
ax_area.yaxis.grid(True)
ax_area.set_ylabel("Area ($\\mu m^2$)")
ax_area.legend(CONTROLLERS, loc="lower right")
fig_area.tight_layout()
fig_area.savefig(f"tapeout-system-area.pdf")

ax_die_area.set_xticks(xs, labels=CODES, rotation=30, ha="right", rotation_mode="anchor")
ax_die_area.yaxis.grid(True)
ax_die_area.set_ylabel("Area ($\\mu m^2$)")
ax_die_area.legend(CONTROLLERS, loc="lower right")
fig_die_area.tight_layout()
fig_die_area.savefig(f"tapeout-system-die_area.pdf")

ax_power.set_xticks(xs, labels=CODES, rotation=30, ha="right", rotation_mode="anchor")
ax_power.yaxis.grid(True)
ax_power.set_ylabel("Power ($mW$)")
ax_power.legend(CONTROLLERS, loc="lower right")
fig_power.tight_layout()
fig_power.savefig(f"tapeout-system-power.pdf")
