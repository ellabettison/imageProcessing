#include "fileAccess.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint8_t * readFile() {
    FILE *hFile;
    uint8_t Byte;
    uint16_t Word;
    uint32_t Dword;
    uint32_t ImageSize;
    uint32_t Index;
    uint32_t ImageStart;


    Index = 0;
    hFile = fopen("C:\\Users\\ellab\\Documents\\Computing\\cproj\\imageProcessing\\src\\tiger.bmp", "r+b");
    if (!hFile){
        printf("couldnt access file");
    }
    fread(&Word, 2, 1, hFile); // BM signature
    Index += 2;
    fread(&Dword, 4, 1, hFile); // size of BMP in bytes
    Index += 4;
    fread(&Dword, 4, 1, hFile); // reserved fields
    Index += 4;
    fread(&ImageStart, 4, 1, hFile); // start of image file
    Index += 4;
    fread(&Dword, 4, 1, hFile); // BITMAPHEADERINFO size, always 40
    Index += 4;
    fread(&ImageSize, 4, 1, hFile);
    fread(&Dword, 4, 1, hFile);
    ImageSize *= Dword; // calculate the number of pixels in the raw image
    Index += 8;
    fread(&Dword, 4, 1, hFile);
    ImageSize *= Dword; // adjust for the number of planes in the raw image
    fread(&Dword, 4, 1, hFile);
    ImageSize *= Dword; // calculate the number of bits in the raw image
    ImageSize /= 8;  //calculate bytes
    Index += 8;
    while (Index < ImageStart) {
        fread(&Byte, 1, 1, hFile);
        Index++;
    }

    uint8_t *Buffer = malloc(ImageSize);
    fread(Buffer, ImageSize, 1, hFile);
    fclose(hFile);
    return Buffer;
}