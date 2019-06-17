#include <stdlib.h>
#include "edgeDetection.h"
#include "imgStruct.h"
#include "masks.h"

void invert(struct imgColour imagein) {
    for (int i = 0; i < imagein.height ; i++) {
        for (int j = 0; j < imagein.width ; j++) {
            for (int k = 0; k < 3; k++) {
                imagein.imgArray[(i*imagein.height) + j][k] = (unsigned char) (255 - imagein.imgArray[(i*imagein.height) + j][k]);
            }

        }
    }
}