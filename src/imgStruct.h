#ifndef IMAGEPROCESSING_IMGSTRUCT_H
#define IMAGEPROCESSING_IMGSTRUCT_H

#include "../libjpeg/jpeg-6b/jmorecfg.h"

struct img {
    unsigned char *imgArray;
    int width;
    int height;
};

enum imgProcType {EDGE};

#endif //IMAGEPROCESSING_IMGSTRUCT_H
