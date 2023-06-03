mkdir $PWD/test-results
arduino-cli compile -b esp32:esp32:esp32 -o output $PWD/problema1_unitTest.ino
arduino-cli upload -p auto -b esp32:esp32:esp32 $PWD/output.hex | tee /tmp/test_output.txt 
