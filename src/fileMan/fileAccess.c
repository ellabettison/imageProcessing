#include "fileAccess.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

unsigned char ** readFile(char * filename) {

        int i;
        FILE* f = fopen(filename, "rb");
        unsigned char info[54];
        fread(info, sizeof(unsigned char), 54, f); // read the 54-byte header

        // extract image height and width from header
        int width = *(int*)&info[18];
        int height = *(int*)&info[22];

        int size = 3 * width * height;
        unsigned char* data = malloc((size_t) size); // allocate 3 bytes per pixel
        fread(data, sizeof(unsigned char), (size_t) size, f); // read the rest of the data at once
        fclose(f);
        unsigned char tmp;

        // storage for new image format
        unsigned char newImg[size/3][3];

    for(i = 0; i < size; i += 3)
        {
        // converts BGR to RGB
            tmp = data[i];
            data[i] = data[i+2];
            data[i+2] = tmp;
            newImg[i/3][0] = data[i];
            newImg[i/3][1] = data[i+1];
            newImg[i/3][2] = data[i+2];
            printf("data i : %u, data i+2 = %u", data[i], data[i+2]);
        }


        return newImg;
    }
