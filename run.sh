rm game.elf &> /dev/null
g++ src/main.cpp src/library/*.cpp src/library/battle/*.cpp -o game.elf -I src/
chmod +x game.elf
./game.elf