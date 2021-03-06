#!/usr/bin/bash
set -e

CONTROLLERS=(BasicController WriteBackController RefreshController ForceRefreshController ContinuousRefreshController TopRefreshController TopBottomRefreshController)
CODES=(IdentityCode ParityCode HammingCode ExtendedHammingCode HsiaoCode HsiaoConstructedCode DuttaToubaCode SheLiCode)

parallel "make -C designs/{1}-{2}" ::: ${CONTROLLERS[@]} ::: ${CODES[@]}
