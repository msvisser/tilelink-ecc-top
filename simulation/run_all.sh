#!/usr/bin/bash
set -e

CONTROLLERS=(BasicController WriteBackController RefreshController ForceRefreshController ContinuousRefreshController TopRefreshController TopBottomRefreshController)
CODES=(IdentityCode ParityCode HammingCode ExtendedHammingCode HsiaoCode HsiaoConstructedCode DuttaToubaCode SheLiCode)

RANGE=({0..49})
LAMBDAS=(0.000150 0.000140 0.000130 0.000120 0.000110 0.000100 0.000090 0.000080 0.000070 0.000060 0.000050 0.000040 0.000030 0.000020 0.000010 0.000005 0.000001)
DOUBLE_RATES=(0.0 0.1)

for controller in ${CONTROLLERS[@]}; do
    for code in ${CODES[@]}; do
        dir=${controller}-${code}
        cd ${dir}
        echo "Starting ${dir}"
        nice parallel -j28 "./simulation ../../firmware/coremark-perf.bin --seed 0 --lambda 0 --double-rate {1} --max-cycles 5100000" ::: ${DOUBLE_RATES[@]} || true
        nice parallel -j28 "./simulation ../../firmware/coremark-perf.bin --seed {1} --lambda {2} --double-rate {3} --max-cycles 5100000" ::: ${RANGE[@]} ::: ${LAMBDAS[@]} ::: ${DOUBLE_RATES[@]} || true
        echo "Done"
        cd ..
    done
done
