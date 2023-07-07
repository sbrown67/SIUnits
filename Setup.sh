var1='Dev'
echo $var1
mkdir $var1
cd $var1
sudo apt install git
sudo apt install cmake
sudo apt install clang
git init
git clone https://github.com/sbrown67/SIUnits.git
cd SIUnits
#reuse init
cmake .
cmake --build app
./SITest
