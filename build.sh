rm game &> /dev/null
g++ src/main.cpp src/library/*.cpp src/library/battle/*.cpp -o game -I src/
chmod +x game
if [ ! -f game ]; then
    echo "Game not found!"
fi