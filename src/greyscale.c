#include <stdlib.h>
#include "greyscale.h"
#include "imgStruct.h"

void greyscale(struct imgColour *imagein, struct img * imageout) {
    int k = 0;
    for (int i = 0; i < imagein->height * imagein->width; i++) {
            unsigned char *pixel = imagein->imgArray[i];
            imageout->imgArray[k] = (unsigned char) (pixel[0] * 0.11 + pixel[1] * 0.59 + pixel[2] * 0.3);
            k++;
    }
}