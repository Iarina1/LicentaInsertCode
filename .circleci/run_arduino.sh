# git clone https://github.com/ThrowTheSwitch/Unity.git
arduino-cli compile --output temp.bin -b esp32:esp32:esp32 $PWD/problema1.ino --debug
arduino-cli compile --output temp.bin -b esp32:esp32:esp32 $PWD/.circleci/problema1_test.ino --debug
