git clone https://github.com/ThrowTheSwitch/Unity.git
ls -la
arduino-cli compile --output temp.bin -b esp32:esp32:esp32 $PWD/problema1.ino --debug
