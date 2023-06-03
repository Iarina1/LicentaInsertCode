mkdir $PWD/test-results
arduino-cli compile -b esp32:esp32:esp32 -o output.bin $PWD/problema1_unitTest.ino
ls -la
arduino-cli upload -p auto -b esp32:esp32:esp32 $PWD/output.bin | tee /tmp/test_output.txt 
