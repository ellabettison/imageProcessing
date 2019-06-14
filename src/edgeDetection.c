#include <stdlib.h>
#include "edgeDetection.h"
#include "imgStruct.h"
#include "masks.h"

void detectEdges(struct img *imagein, struct img *imageout){

    // goes through each convolution direction
    for (int t = 0; t < 8; t++) {

        // starts at one
        for (int i = 1; i < imagein->height - 1; i++) {
            for (int j = 1; j < imagein->width - 1; j++) {

                short newVal = 0;

                for (int x = -1; x <= 1; x++) {
                    for (int y = -1; y <= 1; y++) {

                        unsigned char *pixel = imagein->imgArray[i + x + (imagein->width * j) + y];
                        newVal += strtol(pixel, NULL, 10) * prewittMask[t][x][y];

                    }
                }

                imageout->imgArray[i + (imagein->width*j)] = newVal;

            }
        }
    }
}