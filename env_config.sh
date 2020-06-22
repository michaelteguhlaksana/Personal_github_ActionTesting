#Installing python 2.7
sudo apt update
sudo apt upgrade
sudo apt install python2.7 python-pip

#installing pytest
pip install -U pytest

#installing googletest
sudo apt-get install libgtest-dev
sudo apt-get install cmake
cd /usr/src/gtest
sudo cmake CMakeLists.txt
sudo make
sudo cp *.a /usr/lib
