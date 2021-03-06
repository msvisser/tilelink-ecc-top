#!/usr/bin/bash
set -e

CONTROLLERS=(BasicController WriteBackController RefreshController ForceRefreshController ContinuousRefreshController TopRefreshController TopBottomRefreshController)
CODES=(IdentityCode ParityCode HammingCode ExtendedHammingCode HsiaoCode HsiaoConstructedCode DuttaToubaCode SheLiCode)

for controller in ${CONTROLLERS[@]}; do
    for code in ${CODES[@]}; do
        dir=designs/${controller}-${code}
        # rm -rf ${dir}

        mkdir -p ${dir}
        mkdir -p ${dir}/log
        cp Makefile.tmpl ${dir}/Makefile
        sed -i "s/__CONTROLLER__/${controller}/g" ${dir}/Makefile
        sed -i "s/__CODE__/${code}/g" ${dir}/Makefile
    done
done

parallel "make -C designs/{1}-{2} clean simulation" ::: ${CONTROLLERS[@]} ::: ${CODES[@]}
