/*
 * SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */
 
Thank you for choosing the SIUnits library. Please contact us regarding usage and feature requests at info@6thdpro.com.


cd main (or branch folder)

git push -A

git commit -m "text"

git push --set-upstream https://github.com/sbrown67/SIUnits.git main


To clone into a new branch

// change to the test branch

git checkout -b test 

mkdir test

git clone -b main https://github.com/sbrown67/SIUnits.git


more info...

// setup.sh
var1='Dev'
echo $var1
mkdir $var1
cd $var1
sudo apt install git
sudo apt install cmake
sudo apt install clang
#sudo apt install reuse
git init
git clone https://github.com/sbrown67/SIUnits.git
cd SIUnits
#run reuse before build
#reuse lint
cmake .
cmake --build app
./SITest
