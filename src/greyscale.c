#include <stdlib.h>
#include "greyscale.h"
#include "imgStruct.h"

void greyscale(struct imgColour imagein, struct img imageout) {
    for (int i = 1; i < imagein.height - 1; i++) {
        for (int j = 1; j < imagein.width - 1; j++) {
            uint8_t *pixel = imagein.imgArray[i + (imagein.width * j)];
            imageout.imgArray[i + (imagein.width * j)] = (pixel[0] * 0.3 + pixel[1] * 0.59 + pixel[2] * 0.11);
        }
    }
}