mkdir $PWD/test-results
arduino-cli compile --build-path $PWD/test-results --output tempTest.bin -b esp32:esp32:esp32 $PWD/problema1_unitTest.ino --debug
