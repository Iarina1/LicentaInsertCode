mkdir $PWD/test-results
arduino-cli compile --output tempTest.bin -b esp32:esp32:esp32 $PWD/problema1_unitTest.ino --show-properties --format json -v
