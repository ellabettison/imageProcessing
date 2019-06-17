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
    unsigned char **imagein = readFile(inFileName);

//    struct img *structImageIn = malloc(sizeof(structImageIn));
//    structImageIn->imgArray = imagein;

 //   printf("%s", imagein);
//    BITMAPINFO **fileHeader = malloc(sizeof(BITMAPINFO**));
//    struct img *structImageIn = malloc(sizeof(structImageIn));
//    structImageIn->imgArray = LoadDIBitmap(inFileName, fileHeader);

    unsigned char ** imageOut = malloc(sizeof(*imagein));

    switch (type) {
        case EDGE: detectEdges((struct img *) imagein, imageOut);
    }

//    writeImage(outFileName, structImageOut->imgArray);
}

int main() {
    processImage("/homes/efb4518/Documents/picproc/imageProcessing/src/tiger.bmp", "outpic.jpg", EDGE);
    return 0;
}