#include <stdlib.h>
#include "greyscale.h"
#include "imgStruct.h"

void greyscale(struct imgColour imagein, struct img imageout) {
    for (int i = 0; i < imagein.height ; i++) {
        for (int j = 0; j < imagein.width ; j++) {
            unsigned char *pixel = imagein.imgArray[(i*imagein.height) + j];
            imageout.imgArray[(i*imagein.height) + j] = (unsigned char) (pixel[0] * 0.3 + pixel[1] * 0.59 + pixel[2] * 0.11);
        }
    }
}