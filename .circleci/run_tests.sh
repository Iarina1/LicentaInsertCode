mkdir $PWD/test-results
ls -la
arduino-cli upload -p auto -b esp32:esp32:esp32 $PWD/problema1 --debug | tee /tmp/test_output.txt 
