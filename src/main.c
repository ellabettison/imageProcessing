#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include "edgeDetection.h"
//#include "../libjpeg/jpeg-6b/jmorecfg.h"
#include "imgStruct.h"
#include "fileMan/fileAccess.h"

int height = 450;
int width = 313;

void processImage(char *inFileName, char *outFileName, enum imgProcType type){
    uint8_t *imagein = readFile(inFileName);

    struct img *structImageIn = malloc(sizeof(structImageIn));
    structImageIn->imgArray = imagein;

 //   printf("%s", imagein);
//    BITMAPINFO **fileHeader = malloc(sizeof(BITMAPINFO**));
//    struct img *structImageIn = malloc(sizeof(structImageIn));
//    structImageIn->imgArray = LoadDIBitmap(inFileName, fileHeader);

    struct img *structImageOut = malloc(sizeof(structImageOut));
    unsigned char * imageOut = malloc(height * width);
    structImageOut->imgArray = imageOut;
    structImageOut->width = width;
    structImageOut->height = height;
    switch (type) {
        case EDGE: detectEdges((struct img *) structImageIn->imgArray, (struct img *) structImageOut);
    }

//    writeImage(outFileName, structImageOut->imgArray);
}

int main() {
    processImage("pic.jpg", "outpic.jpg", EDGE);
    return 0;
}