#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include "edgeDetection.h"
#include "../libjpeg/jpeg-6b/jmorecfg.h"
#include "imgStruct.h"

int height = 450;
int width = 313;

void processImage(char *inFileName, char *outFileName, enum imgProcType type){
    unsigned char *imagein = readImage(inFileName);
    printf("%s", imagein);
    struct img *structImageIn = malloc(sizeof(structImageIn));
    structImageIn->imgArray = imagein;
    structImageIn->width = width;
    structImageIn->height = height;

    struct img *structImageOut = malloc(sizeof(structImageOut));
    unsigned char * imageOut = malloc(height * width);
    structImageOut->imgArray = imageOut;
    structImageOut->width = width;
    structImageOut->height = height;
    switch (type) {
        case EDGE: detectEdges((struct img *) imagein, (struct img *) structImageOut);
    }

    writeImage(outFileName, structImageOut->imgArray);
}

int main() {
    processImage("pic.jpg", "outpic.jpg", EDGE);
    return 0;
}