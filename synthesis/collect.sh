#!/usr/bin/bash
set -e

DESIGN_LIST=(
  BasicController-IdentityCode
  BasicController-ParityCode
  BasicController-HammingCode
  BasicController-ExtendedHammingCode
  BasicController-HsiaoCode
  BasicController-HsiaoConstructedCode
  BasicController-DuttaToubaCode
  BasicController-SheLiCode
  WriteBackController-IdentityCode
  WriteBackController-ParityCode
  WriteBackController-HammingCode
  WriteBackController-ExtendedHammingCode
  WriteBackController-HsiaoCode
  WriteBackController-HsiaoConstructedCode
  WriteBackController-DuttaToubaCode
  WriteBackController-SheLiCode
  RefreshController-IdentityCode
  # RefreshController-ParityCode
  RefreshController-HammingCode
  RefreshController-ExtendedHammingCode
  RefreshController-HsiaoCode
  RefreshController-HsiaoConstructedCode
  RefreshController-DuttaToubaCode
  RefreshController-SheLiCode
)
DESIGNS=( "${DESIGN_LIST[@]/#/designs\/}" )
DESIGNS=( "${DESIGNS[@]/%/\/runs\/config_test_adj}" )
OUTPUT=all.csv

sed -n '1p' ${DESIGNS[0]}/reports/final_summary_report.csv | tr -d '\n' > ${OUTPUT}
echo ",synthesis_area_um^2,resizer_area_um^2,power_W" >> ${OUTPUT}
for design in "${DESIGNS[@]}"; do
    sed -n '2p' ${design}/reports/final_summary_report.csv | tr -d '\n' >> ${OUTPUT}
    echo -n "," >> ${OUTPUT}
    sed -n "s/^   Chip area for module '\\\\top': \(.*\)$/\1/p" ${design}/reports/synthesis/1-synthesis.stat.rpt.strategy0 | tr -d '\n' >> ${OUTPUT}
    echo -n "," >> ${OUTPUT}
    sed -n "5s/Design area \([0-9]*\) u^2 [0-9]*% utilization./\1/p" ${design}/reports/placement/9-resizer_sta.area.rpt | tr -d '\n' >> ${OUTPUT}
    echo -n "," >> ${OUTPUT}
    sed -n "s/Total *[^ ]* *[^ ]* *[^ ]* *\([^ ]*\) 100.0%/\1/p" ${design}/reports/routing/27-parasitics_sta.power.rpt >> ${OUTPUT}
done

csview ${OUTPUT} > ${OUTPUT}.txt
