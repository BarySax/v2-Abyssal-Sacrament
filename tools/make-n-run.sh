#!/bin/bahs

make
Check the exit status of the cp command
if [ $? -eq 0 ]; then
  echo "make sucessfull"
  ./build/main
else
  echo "build failed"
fi
