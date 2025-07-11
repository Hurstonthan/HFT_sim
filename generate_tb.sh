#!/bin/bash

if [ -z "$1" ]; then
    echo "Usage: ./genereate_tb.sh <module_name>"
    exit 1
fi

MODULE=$1
echo "generate tb at ./tb"
python3 generate_tb.py $MODULE