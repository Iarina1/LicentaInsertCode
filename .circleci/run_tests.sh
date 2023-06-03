mkdir $PWD/test-results
arduino-cli compile --output tempTest.bin -b esp32:esp32:esp32 $PWD/problema1_unitTest.ino
arduino-cli upload --test-port -b esp32:esp32:esp32 $PWD/problema1_unitTest.ino | tee /tmp/test_output.txt
