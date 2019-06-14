cmake_minimum_required(VERSION 3.14)
project(imageProcessing C)

set(CMAKE_C_STANDARD 99)

add_executable(imageProcessing src/main.c src/masks.c src/imgStruct.h src/utils.c src/utils.h src/edgeDetection.c src/edgeDetection.h src/masks.h src/main.h libjpeg/jpeg-6b/jpeglib.h src/fileMan/fileAccess.c src/fileMan/fileAccess.h)

