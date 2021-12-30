DESIGN_LIST=(
#   BasicController-IdentityCode
  BasicController-ParityCode
  WriteBackController-HammingCode
  WriteBackController-HsiaoCode
  WriteBackController-SheLiCode
  RefreshController-HammingCode
  RefreshController-ExtendedHammingCode
  RefreshController-HsiaoCode
)

sed -n '1p' designs/${DESIGN_LIST[0]}/runs/config_test_batch2/report.csv
for design in ${DESIGN_LIST[@]}; do
    sed -n '2p' designs/${design}/runs/config_test_batch2/report.csv
    echo ""
done
