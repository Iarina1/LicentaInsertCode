mkdir test-results
arduino-cli compile --build-path test-results --output tempTest.bin -b esp32:esp32:esp32 $PWD/problema1_unitTest.ino --debug
