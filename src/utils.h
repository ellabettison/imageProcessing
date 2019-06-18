
#ifndef IMAGEPROCESSING_UTILS_H
#define IMAGEPROCESSING_UTILS_H

#include "imgStruct.h"

void initialiseImg(struct img *image, int width, int height);
void initialiseImgCol(struct imgColour *image, int width, int height);
void imgColourLinearisation(struct imgColour *image, struct img * linearImage);
void greyToRGB(struct img *image, struct img *outImg);

#endif
