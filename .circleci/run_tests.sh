mkdir $PWD/test-results
arduino-cli compile -b esp32:esp32:esp32 -o problema1_unitTest.bin $PWD/problema1_unitTest.ino
ls -la
arduino-cli upload -p auto -b esp32:esp32:esp32 $PWD/problema1.bin $PWD/problema1_unitTest.bin | tee /tmp/test_output.txt 
