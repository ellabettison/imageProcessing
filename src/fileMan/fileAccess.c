#include "fileAccess.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <FreeImage.h>

#include "../imgStruct.h"

static int headerSize = 54;

struct imgColour *readFile(char * filename) {

        int i;
        FILE* f = fopen(filename, "rb");
        if(!f){
            printf("could not access file");
            return NULL;
        }
        unsigned char *info = calloc((size_t) headerSize, sizeof(unsigned char));
        fread(info, sizeof(unsigned char), (size_t) headerSize, f); // read the 54-byte header

        // extract image height and width from header
        int width = *(int*)&info[18];
        int height = *(int*)&info[22];

        int size = 3 * width * height;
        unsigned char* data = malloc(size * sizeof(unsigned char)); // allocate 3 bytes per pixel
        fread(data, sizeof(unsigned char), (size_t) size, f); // read the rest of the data at once
        fclose(f);
        unsigned char tmp;

        // storage for new image format
        unsigned char ** newImg = (unsigned char **)calloc((size_t) size, sizeof(unsigned char *));


    for(i = 0; i < size; i += 3)
        {
        // converts BGR to RGB
//            tmp = data[i];
//            data[i] = data[i+2];
//            data[i+2] = tmp;
            newImg[i/3] = (unsigned char *) calloc(3, sizeof(unsigned char));
        }

    for(i = 0; i < size; i += 3)
    {
        newImg[i/3][0] = data[i];
        newImg[i/3][1] = data[i+1];
        newImg[i/3][2] = data[i+2];
        //printf("data i : %u, data i+2 = %u", data[i], data[i+2]);
    }

        struct imgColour *newImgStruct = malloc(sizeof(struct imgColour));
        newImgStruct->imgArray = newImg;
        newImgStruct->height = height;
        newImgStruct->width = width;
        newImgStruct->header = info;

        return newImgStruct;
    }

int writeFile(char * filename, struct img image) {

    FILE* f = fopen(filename, "a+b");
    if(!f){
        printf("could not access file");
        return 0;
    }

    //image.header = realloc(image.header, (size_t) (image.height * image.width * 3 + headerSize));
    //memcpy(image.header + headerSize, image.imgArray, sizeof(image.imgArray));

    fwrite(image.header, sizeof(unsigned char), (size_t) headerSize, f);
    fwrite(image.imgArray, sizeof(unsigned char), (size_t) image.width * image.height * 3, f);
    fclose(f);

    return 1;
}