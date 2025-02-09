del game.exe > NUL
g++ src/main.cpp src/library/*.cpp src/library/battle/*.cpp -o game.exe -I src/
game.exe