
#ifndef IMAGEPROCESSING_UTILS_H
#define IMAGEPROCESSING_UTILS_H

#include "../libjpeg/jpeg-6b/jmorecfg.h"

void writeImage(char * fileName, unsigned char *imageBuffer);

unsigned char * readImage(char * fileName);

#endif //IMAGEPROCESSING_UTILS_H
