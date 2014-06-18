#!/bin/bash
# Copyright (c) 2014 - Qeo LLC
#
# The source code form of this Qeo Open Source Project component is subject
# to the terms of the Clear BSD license.
#
# You can redistribute it and/or modify it under the terms of the Clear BSD
# License (http://directory.fsf.org/wiki/License:ClearBSD). See LICENSE file
# for more details.
#
# The Qeo Open Source Project also includes third party Open Source Software.
# See LICENSE file for more details.

IMPORT_DIR=ubuntu

SELF_DIR=$(cd $(dirname $0) > /dev/null; pwd)
function syntax()
{
    echo "Usage: $(basename $0) <dir where to put all generated binaries>"
    echo "set environment variable DEBUG=1 to make debug libraries"
    exit 1
}   

if [ $# -ne 1 ]; then
    syntax
fi
mkdir -p $1 2>/dev/null
INSTALL_DIR=$(cd $1 > /dev/null; pwd)

DEBUG_SUFFIX=
if [ "${DEBUG}" = 1 ]
then
    DEBUG_SUFFIX="_DEBUG"
fi

cd "${SELF_DIR}/qeo-c/qeo-native"
make -f Makefile_component IMPORT_DIR_SUFFIX=${IMPORT_DIR} qeo-native_sdk_lib_HOSTLINUX${DEBUG_SUFFIX}.tgz qeo-native_sdk_headers_HOSTLINUX.tgz || exit 1
cd "${SELF_DIR}/qeo-c/qeo-forwarder"
make -f Makefile_component IMPORT_DIR_SUFFIX=${IMPORT_DIR} qeo-forwarder_sdk_lib_HOSTLINUX${DEBUG_SUFFIX}.tgz || exit 1
cd ${SELF_DIR}
if [ "${DEBUG}" = 1 ]
then
    cp -r qeo-c/output/qeo-native/HOSTLINUX/Debug/sdk/install/* "${INSTALL_DIR}"
    cp -r qeo-c/output/qeo-forwarder/HOSTLINUX/Debug/sdk/install/* "${INSTALL_DIR}"
else
    cp -r qeo-c/output/qeo-native/HOSTLINUX/sdk/install/* ${INSTALL_DIR}
    cp -r qeo-c/output/qeo-forwarder/HOSTLINUX/sdk/install/* ${INSTALL_DIR}
fi
echo "You can find the resulting binaries at ${INSTALL_DIR}"
