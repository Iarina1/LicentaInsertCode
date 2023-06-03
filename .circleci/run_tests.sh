mkdir $PWD/test-results
arduino-cli compile --test-port --output tempTest.bin -b esp32:esp32:esp32 $PWD/problema1_unitTest.ino | tee /tmp/test_output.txt
