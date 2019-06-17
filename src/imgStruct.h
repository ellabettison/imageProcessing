#ifndef IMAGEPROCESSING_IMGSTRUCT_H
#define IMAGEPROCESSING_IMGSTRUCT_H

//#include "../libjpeg/jpeg-6b/jmorecfg.h"

#include <stdint.h>

struct img {
    uint8_t *imgArray;
    int width;
    int height;
};

struct imgColour {
    uint8_t *imgArray[3];
    int width;
    int height;
};

enum imgProcType {EDGE, INVERT};

#endif //IMAGEPROCESSING_IMGSTRUCT_H
