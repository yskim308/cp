#!/bin/bash

xmake build

if [ $? -eq 0 ]; then
    oj test -c "xmake run -q"
else
    echo "Build failed!"
fi
