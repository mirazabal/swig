# swig
Swig wrapper example for python and CMake.

1- Clone repository :

git clone https://github.com/mirazabal/swig.git

2- Install SWIG:

sudo apt install swig

3 - Build the project with CMake:

cd swig && mkdir build && cd build && cmake .. && make

4- Start a python 3 script:

python3

5- Import the module:

import flexric

6- Use the module:

flexric.connect('192.168.1.0:5555')

flexric.stats()

