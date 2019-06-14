#! /bin/bash

set -e -o pipefail

# TODO(deshwal): Define build environment variables (CFLAGS etc) as needed.

if [ -z "$PARALLELISM" ]; then
  export PARALLELISM=10
fi

pushd devdocker/3rdparty/$EXTERNAL_LIB/src-gitignore > /dev/null
source ../build.sh
popd > /dev/null
