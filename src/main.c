#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include "edgeDetection.h"
#include "inverter.h"
//#include "../libjpeg/jpeg-6b/jmorecfg.h"
#include "imgStruct.h"
#include "fileMan/fileAccess.h"

int height = 450;
int width = 313;

void processImage(char *inFileName, char *outFileName, enum imgProcType type){
    unsigned char **imagein = readFile(inFileName);

    unsigned char ** imageOut = malloc(sizeof(*imagein));

    switch (type) {
        case EDGE: detectEdges((struct img *) structImageIn->imgArray, (struct img *) structImageOut);
        case INVERT: invert((struct img *) structImageIn->imgArray, (struct img *) structImageOut);
    }

//    writeImage(outFileName, structImageOut->imgArray);
}

int main() {
    processImage("/homes/efb4518/Documents/picproc/imageProcessing/src/tiger.bmp", "outpic.jpg", EDGE);
    return 0;
}