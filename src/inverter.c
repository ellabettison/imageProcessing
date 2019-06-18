#include <stdlib.h>
#include "edgeDetection.h"
#include "imgStruct.h"

void invert(struct imgColour *imagein) {
    for (int i = 0; i < imagein->height * imagein->width; i++) {
            for (int k = 0; k < 3; k++) {
                imagein->imgArray[i][k] = (unsigned char) (255 - imagein->imgArray[i][k]);
            }
        }
}