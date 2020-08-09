#!/bin/bash

cd build
echo "Entered build directory"

rm -rf *

arg=$1

case $arg in
	Rama )
		echo From the blessings of Lord Rama ;;
	Krishna )
        echo From the blessings of Lord Krishna ;;
    Hari )
        echo From the blessings of Lord Hari ;;
esac	

cmake ..
echo "CMake completed"

make
echo "Executable JaiSriRam generated"

./JaiSriRam


