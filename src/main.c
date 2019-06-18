#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include "edgeDetection.h"
#include "inverter.h"
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

    struct img *linearImageOut = malloc(sizeof(struct img));
    initialiseImg(linearImageOut, structImageIn->width, structImageIn->height);
    linearImageOut->header = structImageIn->header;

    struct img *greyImgOut = malloc(sizeof(struct img));
    initialiseImg(greyImgOut, structImageIn->width, structImageIn->height);
    greyImgOut->header = structImageIn->header;

    switch (type) {
        case EDGE: ;
            greyscale(structImageIn, greyImgOut);
            detectEdges(greyImgOut);
            greyToRGB(greyImgOut, linearImageOut);

            break;
        case INVERT:
            invert(structImageIn);
            imgColourLinearisation(structImageIn, linearImageOut);
            break;
        case GREYSCALE: ;
            greyscale(structImageIn, greyImgOut);
            greyToRGB(greyImgOut, linearImageOut);
    }

    writeFile(outFileName, *linearImageOut);
}

int main() {
    processImage("/homes/efb4518/Documents/picproc/imageProcessing/src/tiger.bmp", "/homes/efb4518/Documents/picproc/imageProcessing/src/outpic.bmp", EDGE);
    return 0;
}