#!/bin/bash

if [ -z "$1" ]; then
    echo "Usage: ./run_sim.sh <module_name>"
    exit 1
fi

MODULE=$1

echo "running simulation: ./obj_dir/V$MODULE"
./obj_dir/V$MODULE