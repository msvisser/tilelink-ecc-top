#!/usr/bin/bash
set -e

CONTROLLERS=(BasicController WriteBackController RefreshController ForceRefreshController InsaneRefreshController TopRefreshController TopBottomRefreshController)
CODES=(IdentityCode ParityCode HammingCode ExtendedHammingCode HsiaoCode HsiaoConstructedCode DuttaToubaCode SheLiCode)

parallel "make -C {1}-{2}" ::: ${CONTROLLERS[@]} ::: ${CODES[@]}
