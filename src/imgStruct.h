#ifndef IMAGEPROCESSING_IMGSTRUCT_H
#define IMAGEPROCESSING_IMGSTRUCT_H

//#include "../libjpeg/jpeg-6b/jmorecfg.h"

#include <stdint.h>

struct img {
    uint8_t *imgArray;
    int width;
    int height;
};

enum imgProcType {EDGE};

#endif //IMAGEPROCESSING_IMGSTRUCT_H
