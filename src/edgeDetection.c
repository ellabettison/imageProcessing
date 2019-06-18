#include <stdlib.h>
#include "edgeDetection.h"
#include "imgStruct.h"
#include "masks.h"

void detectEdges(struct img * imagein){


        // starts at one
        for (int i = 1; i < imagein->height - 1; i++) {
            for (int j = 1; j < imagein->width - 1; j++) {

                unsigned char newVal = 0;

                // goes through each convolution direction
                for (int t = 0; t < 8; t++) {

                    for (int x = -1; x <= 1; x++) {
                        for (int y = -1; y <= 1; y++) {

                            unsigned char pixel = imagein->imgArray[(j * imagein->width) + i + (y * imagein->width) + x];
                            newVal += pixel * prewittMask[t][x][y];
                        }
                    }
                }
                imagein->imgArray[(j*imagein->width) + i] += newVal/8;
            }

    }
}