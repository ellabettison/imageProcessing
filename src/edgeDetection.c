#include <stdlib.h>
#include "edgeDetection.h"
#include "imgStruct.h"
#include "masks.h"

void detectEdges(struct img * imagein){


        // starts at one
        for (int i = 2; i < imagein->height - 2; i++) {
            for (int j = 2; j < imagein->width - 2; j++) {

                unsigned char newVal = 0;

                // goes through each convolution direction
                for (int t = 0; t < 2; t++) {
                    int tempVal = 0;

                    for (int x = -2; x <= 2; x++) {
                        for (int y = -2; y <= 2; y++) {

                            int pixel = imagein->imgArray[(j * imagein->width) + i + (y * imagein->width) + x];
                            tempVal += (pixel * sobelMask[t][y][x]);
                        }
                    }
                    if (abs(tempVal) > 25000000){
                        newVal += abs(tempVal)/1000000 ;
                        if (newVal > 255){
                            newVal = 255;
                        }
                    }
                }
                imagein->imgArray[(j * imagein->width) + i] = newVal;
            }

    }
}