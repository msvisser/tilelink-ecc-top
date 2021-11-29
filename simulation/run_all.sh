#!/usr/bin/bash
set -e

CONTROLLERS=(BasicController WriteBackController)
CODES=(IdentityCode ParityCode HammingCode ExtendedHammingCode HsiaoCode HsiaoConstructedCode DuttaToubaCode SheLiCode)

LAMBDAS=(0.00100 0.00090 0.00080 0.00070 0.00060 0.00050 0.00040 0.00030 0.00020 0.00010 0.00005 0.00001)

for controller in ${CONTROLLERS[@]}; do
    for code in ${CODES[@]}; do
        dir=${controller}-${code}
        cd ${dir}
        echo "Starting ${dir}"
        ./simulation ../../firmware/coremark-perf.bin --seed 0 --lambda 0 --max-cycles 5100000 || true
        parallel './simulation ../../firmware/coremark-perf.bin --seed {1} --lambda {2} --max-cycles 5100000' ::: {0..9} ::: ${LAMBDAS[@]} || true
        echo "Done"
        cd ..
    done
done
