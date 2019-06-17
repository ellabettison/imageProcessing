#include <stdlib.h>
#include <stdio.h>
#include "utils.h"
#include "main.h"
#include "imgStruct.h"

void initialiseImg(struct img *image, int width, int height){
    image->imgArray = calloc((size_t) (width * height), sizeof(unsigned char));
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

struct img * imgColourLinearisation(struct imgColour image) {
    struct img *linearImage = malloc(sizeof(struct img));
    initialiseImg(linearImage, image.width, image.height);
    linearImage->header = image.header;
    for (int i = 0; i < image.height; i++) {
        for (int j = 0; j < image.width; j++) {
            for (int k = 0; k < 3; k++) {
                linearImage->imgArray[(image.height *i) + (j*3) +k] = image.imgArray[image.height * i + j][k];
            }
        }
    }
    return linearImage;
}