#!/usr/bin/env bash
set -e

function build_test {
  echo "[$1 $2] Building"

  mkdir -p designs/$1-$2/src

  # python ../tilelink_sky130.py --controller $1 --code $2 generate designs/$1-$2/src/top.v

  cp config.tcl designs/$1-$2/config.tcl
  cp pin_order.cfg designs/$1-$2/pin_order.cfg

  echo "[$1 $2] Done"
}

CONTROLLER_LIST=(BasicController WriteBackController RefreshController)
CODE_LIST=(IdentityCode ParityCode HammingCode ExtendedHammingCode HsiaoCode HsiaoConstructedCode DuttaToubaCode SheLiCode)

for controller in "${CONTROLLER_LIST[@]}"; do
    for ((i = 0; i < ${#CODE_LIST[@]}; ++i)); do
        build_test ${controller} ${CODE_LIST[$i]}
    done
done
