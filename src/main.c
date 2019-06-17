#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include "edgeDetection.h"
#include "inverter.h"
//#include "../libjpeg/jpeg-6b/jmorecfg.h"
#include "imgStruct.h"
#include "fileMan/fileAccess.h"
#include "greyscale.h"
#include "utils.h"

int height = 450;
int width = 313;

void processImage(char *inFileName, char *outFileName, enum imgProcType type){
    struct imgColour *structImageIn= readFile(inFileName);
    struct imgColour *structImageOut = malloc(sizeof(struct imgColour));

    initialiseImgCol(structImageOut, structImageIn->width, structImageIn->height);

    switch (type) {
        case EDGE: ;
            struct img *greyImgOut = calloc(1, sizeof(struct img));
            initialiseImg(greyImgOut, structImageIn->width, structImageIn->height);

            greyscale(*structImageIn, *greyImgOut);
            detectEdges(greyImgOut, (struct img *) structImageOut);
            break;
        case INVERT: invert(*structImageIn);
    }


    writeFile(outFileName, NULL);
}

int main() {
    processImage("/homes/efb4518/Documents/picproc/imageProcessing/src/tiger.bmp", "outpic.bmp", INVERT);
    return 0;
}