total_height = 1550

# 808.9 BY 553.9
mask_width = 808.9
mask_height = 553.9

mask_0_x = 5.00
mask_0_y = 20.00
mask_1_x = 5.00
mask_1_y = total_height - mask_height - 5.00

print(f"tl_rom.memory.sram32_0_mask {mask_0_x:.2f} {mask_0_y:.2f} S")
print(f"tl_rom.memory.sram32_1_mask {mask_1_x:.2f} {mask_1_y:.2f} FN")

ram_sizes = {
    32: (808.90, 553.22, 1750),
    33: (829.30, 553.90, 1750),
    38: (939.46, 559.34, 1900),
    39: (959.86, 559.34, 1900),
    40: (981.62, 560.02, 1900),
}

for bits, (sram_width, sram_height, total_width) in ram_sizes.items():
    sram_0_x = total_width - sram_width - 5.00
    sram_0_y = 20.00
    sram_1_x = total_width - sram_width - 5.00
    sram_1_y = total_height - sram_height - 5.00

    print(f"# tl_ram.memory.sram{bits}_0 {sram_0_x:.2f} {sram_0_y:.2f} FS")
    print(f"# tl_ram.memory.sram{bits}_1 {sram_1_x:.2f} {sram_1_y:.2f} N")


for bits, (sram_width, sram_height, total_width) in ram_sizes.items():
    sram_area = sram_width * sram_height
    mask_area = mask_width * mask_height
    total_area = 2 * mask_area + 2 * sram_area
    print(f"{bits} {sram_area:.2f} um2  {total_area:.2f} um2")
