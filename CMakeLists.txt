cmake_minimum_required(VERSION 3.12)
project(imageProcessing C)

set(CMAKE_C_STANDARD 99)

add_executable(imageProcessing src/main.c src/masks.c src/imgStruct.h src/utils.c src/utils.h src/edgeDetection.c src/edgeDetection.h src/masks.h src/main.h src/fileMan/fileAccess.c src/fileMan/fileAccess.h src/inverter.c src/inverter.h src/greyscale.c src/greyscale.h)

