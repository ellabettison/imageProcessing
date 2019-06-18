#include <stdlib.h>
#include <stdio.h>
#include "utils.h"
#include "main.h"
#include "imgStruct.h"

void initialiseImg(struct img *image, int width, int height){
    image->imgArray = calloc((size_t) (width * height * 3), sizeof(unsigned char));
    image->height = height;
    image->width = width;
    image->header = NULL;
}

void initialiseImgCol(struct imgColour *image, int width, int height){
    int size = width * height;
    image->imgArray = (unsigned char **)calloc((size_t) size, sizeof(unsigned char *));
    for(int i = 0; i < size; i += 3) {
        image->imgArray[i/3] = (unsigned char *) calloc(3, sizeof(unsigned char));
    }
    image->height = height;
    image->width = width;
    image->header = NULL;
}

void imgColourLinearisation(struct imgColour *image, struct img * linearImage) {
    int l = 0;
    //struct img *linearImage = malloc(sizeof(struct img));
    //initialiseImg(linearImage, image.width, image.height);
    //linearImage->header = image.header;
    for (int i = 0; i < image->height * image->width; i++) {
            for (int k = 0; k < 3; k++) {
                linearImage->imgArray[l] = image->imgArray[i][k];
                l++;
            }
    }
}

void greyToRGB(struct img *image, struct img *outImg){
    for (int i = 0; i < image->height * image->width; i++) {
        for (int k = 0; k < 3; k++) {
            outImg->imgArray[i * 3 + k] = image->imgArray[i];
        }
    }
}