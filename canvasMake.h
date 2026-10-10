#ifndef CANVAS_MAKE
#define CANVAS_MAKE

char pickChar(char *charList, int size);

char genRandomChar(double charChance, char *charList,int size);

char** createCanvas(int width, int height);

void printCanvas(char** Canvas, int width, int height);

#endif