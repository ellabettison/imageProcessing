#ifndef IMAGEPROCESSING_FILEACCESS_H
#define IMAGEPROCESSING_FILEACCESS_H

#include <stdint.h>
#include "../imgStruct.h"

struct imgColour *readFile(char * filename);
int writeFile(char * filename, struct img image);

#endif

