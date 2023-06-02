git clone https://github.com/ThrowTheSwitch/Unity.git
mv Unity/src/* ./
ls -la
rm -rf Unity
ls -la
arduino-cli compile --output temp.bin -b esp32:esp32:esp32 $PWD/problema1.ino --debug
