#!/bin/sh
DIRS="include milkwm mdm mpanel"
clang-format --verbose -i `find $DIRS -name "*.c" -or -name "*.h"`
