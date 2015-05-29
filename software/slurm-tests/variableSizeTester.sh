#!/bin/sh
#10 MB app, 1000 seconds
echo "program init. Hostname: " `hostname`
./variableSizeTester 10 10
echo "program end. Hsotname: " `hostname`
