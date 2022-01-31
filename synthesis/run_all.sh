#!/usr/bin/env bash
set -e

OPENLANE_DIR=/home/michiel/tue/Thesis/OpenLane
DESIGNS_DIR=$(pwd)/designs
PDK_ROOT=${OPENLANE_DIR}/pdks
DOCKER_OPTIONS=$(cd ${OPENLANE_DIR} && python3 ./env.py docker-config)
OPENLANE_TAG=$(cd ${OPENLANE_DIR} && python3 ./dependencies/get_tag.py)
OPENLANE_IMAGE_NAME=efabless/openlane:${OPENLANE_TAG}

function docker_run {
  docker run --rm \
  -v ${OPENLANE_DIR}:/openlane \
  -v ${PDK_ROOT}:${PDK_ROOT} -e PDK_ROOT=${PDK_ROOT} \
  -v ${DESIGNS_DIR}:/openlane/designs \
  ${DOCKER_OPTIONS} -it ${OPENLANE_IMAGE_NAME} \
  python3 run_designs.py --threads 8 --tag test_taller $@
}

CONTROLLER_LIST=(BasicController WriteBackController RefreshController)
CODE_LIST=(IdentityCode ParityCode HammingCode ExtendedHammingCode HsiaoCode HsiaoConstructedCode DuttaToubaCode SheLiCode)

DESIGN_LIST=()
for controller in "${CONTROLLER_LIST[@]}"; do
  for code in "${CODE_LIST[@]}"; do
    DESIGN_LIST+=("${controller}-${code}")
  done
done

docker_run ${DESIGN_LIST[@]}
