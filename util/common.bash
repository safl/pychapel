#!/usr/bin/env bash
#
# Common utilities.

CWD=$(cd $(dirname ${BASH_SOURCE[0]}) ; pwd)
REPO_ROOT=$(cd $CWD/.. ; pwd)
MODULE_DIR=$REPO_ROOT/module
TST_DIR=$MODULE_DIR/testing

function log_date()
{
    echo -n "$(date '+%Y-%m-%d %H:%M:%S') "
}

function log_info()
{
    local msg=$@
    log_date
    echo "[INFO] ${msg}"
}

function log_error()
{
    local msg=$@
    log_date
    echo "[ERROR] ${msg}"
}
