# Cyberprotect task Inference machine
As you could already understand this is a prototype of inference machine
## How to build
1. Download the repository ('.zip' file), unpack it.
2. Go to the source directory of the project, containing 'CMakeLists.txt' file.
3. Generate the project buildsystem and build the project using command line. For example, on linux use command
'cmake -S . -B build -DCMAKE_BUILD_TYPE=Release && cmake --build ./build'
4. The job is done.
## How to run the program
1. Staying in the source directory use command
'./build/ui'
2. Enjoy the program.
## How to run the tests
1. Staying in the source directory use command
'make -C ./build test'
2. Enjoy the results of the tests.
