import csv

design_name_prefix = "/openlane/designs/"

with open('all.csv') as infile:
    reader = csv.DictReader(infile, delimiter=',', quotechar='"')

    design_dict = {}

    for row in reader:
        design = row['design'][len(design_name_prefix):]
        design_dict[design] = row

    for controller in ["BasicController", "WriteBackController", "RefreshController"]:
        for code in ["IdentityCode", "ParityCode", "HammingCode", "ExtendedHammingCode", "HsiaoCode", "HsiaoConstructedCode", "DuttaToubaCode", "SheLiCode"]:
            design = f"{controller}-{code}"
            if design not in design_dict:
                print(f"{design:45} missing results")
                continue
            row = design_dict[design]
            clk_freq = float(row['suggested_clock_frequency'])
            clk_period = float(row['suggested_clock_period'])
            synth_area = float(row['synthesis_area_um^2'])
            area = int(row['resizer_area_um^2'])
            print(f"{design:45} {clk_freq:.2f} MHz  {clk_period:.2f} ns  {synth_area:9.3f} um^2  {area:5d} um^2")
        print()
