git clone https://github.com/ThrowTheSwitch/Unity.git
mv  $PWD/Unity/src/* $PWD/.
rm -rf $PWD/Unity
arduino-cli compile --output temp.bin -b esp32:esp32:esp32 $PWD/problema1.ino --debug
