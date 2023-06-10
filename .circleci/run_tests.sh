# mkdir $PWD/test-results
# ls -la
# # arduino-cli compile --upload $PWD/problema1.ino --port COM7 --fqbn esp32:esp32:esp32 | tee /tmp/test_output.txt
# arduino-cli upload -p auto -b esp32:esp32:esp32 $PWD/problema1.ino --debug | tee /tmp/test_output.txt

python3 test_problema.py | tee /tmp/test_output.txt
