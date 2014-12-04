#!/usr/bin/env bash
#
# Common utilities.

CWD=$(cd $(dirname ${BASH_SOURCE[0]}) ; pwd)
REPO_ROOT=$(cd $CWD/.. ; pwd)
EXM_DIR=$REPO_ROOT/docs/source/examples
TST_DIR=$REPO_ROOT/module/testing

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
