#ifndef CANVAS_MAKE
#define CANVAS_MAKE


char** createCanvas(int width, int height);

void printCanvas(char** Canvas, int width, int height);

void freeCanvas(char** Canvas, int width, int height);

#endif