#include <stdlib.h>
#include "edgeDetection.h"
#include "imgStruct.h"
#include "masks.h"

void invert(struct imgColour imagein, struct imgColour imageout) {
    for (int i = 1; i < imagein.height - 1; i++) {
        for (int j = 1; j < imagein.width - 1; j++) {
            for (int k = 0; k < 3; k++) {
                imageout.imgArray[i + (imagein.width * j)][k] = 255 - imagein.imgArray[i + (imagein.width * j)][k];
            }

        }
    }
}