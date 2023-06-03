mkdir $PWD/test-results
arduino-cli compile --output tempTest.bin -b esp32:esp32:esp32 $PWD/problema1_unitTest.ino
arduino-cli upload -p auto -b esp32:esp32:esp32 $PWD/tempTest.bin | tee /tmp/test_output.txt 
