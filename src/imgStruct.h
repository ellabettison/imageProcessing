#ifndef IMAGEPROCESSING_IMGSTRUCT_H
#define IMAGEPROCESSING_IMGSTRUCT_H

//#include "../libjpeg/jpeg-6b/jmorecfg.h"

#include <stdint.h>

struct img {
    unsigned char *imgArray;
    int width;
    int height;
    unsigned char *header;
};

struct imgColour {
    unsigned char **imgArray;
    int width;
    int height;
    unsigned char *header;
};

enum imgProcType {EDGE, INVERT};

#endif //IMAGEPROCESSING_IMGSTRUCT_H
