#!/usr/bin/env bash
set -e

function build_test {
  echo "[$1 $2] Building"

  mkdir -p designs/$1-$2/src
  mkdir -p designs/$1-$2/bb

  # python ../tilelink_soc.py --platform sky130 --controller $1 --code $2 generate designs/$1-$2/src/top.v

  cp config.tcl designs/$1-$2/config.tcl
  cp pin_order.cfg designs/$1-$2/pin_order.cfg
  cp macro_placement.cfg designs/$1-$2/macro_placement.cfg

  cp bb/sram_32_2048_sky130_mask.{gds,lef,v} designs/$1-$2/bb
  cp bb/sram_$3_2048_sky130.{gds,lef,v} designs/$1-$2/bb

  sed -i "s/^# $3 //g" designs/$1-$2/config.tcl
  sed -i "s/^# tl_ram.memory.sram$3/tl_ram.memory.sram$3/g" designs/$1-$2/macro_placement.cfg

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
