#!/usr/bin/env bash
#
# Run Chapel and Python tests.

set -ex

CWD=$(cd $(dirname $0) ; pwd)
$CWD/test_chapel.bash
$CWD/test_python.bash
