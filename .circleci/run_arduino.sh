git clone https://github.com/ThrowTheSwitch/Unity.git
ls -la
cat Unity/src/unity.h
arduino-cli compile --output temp.bin -b esp32:esp32:esp32 $PWD/problema1.ino --debug
