#include <stdlib.h>
#include <stdio.h>
#include "utils.h"
#include "main.h"
//#include "../libjpeg/jpeg-6b/jpeglib.h"

//JSAMPLE * imageBuffer;
/*
void writeImage(char * fileName, unsigned char *imageBuffer){
    // contains jpeg compression parameters
    struct jpeg_compress_struct cinfo;
    // jpeg error handler
    struct jpeg_error_mgr jerr;

    FILE *outfile;
    //JSAMPROW rowPointer[1];
    unsigned char * rowPointer[1];
    int rowStride;

    // initialise JPEG compression object
    // error handler
    cinfo.err = jpeg_std_error(&jerr);
    //jpeg compression object
    jpeg_create_compress(&cinfo);

    // specify data destination
    if (!(outfile = fopen(fileName, "wb"))){
        fprintf(stderr, "file %s could not be opened", fileName);
        exit(1);
    }
    jpeg_stdio_dest(&cinfo, outfile);

    // set compression parameters
    cinfo.image_width = width;
    cinfo.image_height = height;
    // number of colour components
    cinfo.input_components = 1;
    cinfo.in_color_space = JCS_GRAYSCALE;
    jpeg_set_defaults(&cinfo);

    jpeg_start_compress(&cinfo, TRUE);

    // write one line per call
    // JSAMPLEs per row in image_buffer
    rowStride = width * 3;

    ******************
    while (cinfo.next_scanline < cinfo.image_height){
        // jpeg_write_scanlines takes in an array of pointers to scanlines
        // passes array of one element at a time
        rowPointer[0] = (JSAMPROW) & imageBuffer[cinfo.next_scanline * rowStride];
        (void) jpeg_write_scanlines(&cinfo, rowPointer, 1);
    }
    ******************

    while (cinfo.next_scanline < cinfo.image_height){
        // jpeg_write_scanlines takes in an array of pointers to scanlines
        // passes array of one element at a time
        rowPointer[0] = (unsigned char *) imageBuffer + cinfo.image_width * cinfo.next_scanline;
        (void) jpeg_write_scanlines(&cinfo, rowPointer, 1);
    }


    // finish compression
    jpeg_finish_compress(&cinfo);
    fclose(outfile);

    jpeg_destroy_compress(&cinfo);
}

unsigned char * readImage(char * fileName){
    unsigned char * imageBuffer;

    struct jpeg_decompress_struct cinfo;
    struct jpeg_error_mgr jerr;

    FILE *infile;
    unsigned char * rowPointer[1];
    int rowStride;

    cinfo.err = jpeg_std_error(&jerr);

    if (!(infile = fopen(fileName, "rb"))){
        fprintf(stderr, "file %s could not be opened", fileName);
        return 0;
    }

    jpeg_stdio_src(&cinfo, infile);
    // idk if we acc need to use header
    (void) jpeg_read_header(&cinfo, TRUE);

    // start decompressor
    (void) jpeg_start_decompress(&cinfo);

    rowStride = cinfo.output_width * cinfo.output_components;

    imageBuffer = malloc(cinfo.output_height * cinfo.output_width);

    while (cinfo.output_scanline < cinfo.output_height){
        rowPointer[0] = (unsigned char *) imageBuffer + cinfo.output_width * cinfo.output_scanline;
        (void) jpeg_read_scanlines(&cinfo, rowPointer, 1);
    }

    (void) jpeg_finish_decompress(&cinfo);

    jpeg_destroy_decompress(&cinfo);
    fclose(infile);
    return imageBuffer;

}*/