#!/usr/bin/env bash
set -e

function build_test {
  echo "[$1 $2] Building"

  mkdir -p designs/$1-$2/src
  mkdir -p designs/$1-$2/bb

  python ../tilelink_soc.py --platform sky130 --controller $1 --code $2 generate designs/$1-$2/src/top.v

  cp bb/* designs/$1-$2/bb/
  cp config.tcl designs/$1-$2/config.tcl
  cp macro_placement.cfg designs/$1-$2/macro_placement.cfg
  sed -i "s/# tl_ram.memory$3/tl_ram.memory$3/" designs/$1-$2/macro_placement.cfg
  cp pin_order.cfg designs/$1-$2/pin_order.cfg

  echo "[$1 $2] Done"
}

CONTROLLER_LIST=(BasicController WriteBackController RefreshController)
CODE_LIST=(IdentityCode ParityCode HammingCode ExtendedHammingCode HsiaoCode HsiaoConstructedCode DuttaToubaCode SheLiCode)
CODE_BITS=(32 33 38 39 39 39 39 40)

for controller in "${CONTROLLER_LIST[@]}"; do
    for ((i = 0; i < ${#CODE_LIST[@]}; ++i)); do
        build_test ${controller} ${CODE_LIST[$i]} ${CODE_BITS[$i]}
    done
done
