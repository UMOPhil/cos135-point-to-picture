//Phil Ramos - canvasMake.h is the index for the functions in canvasMake
//Acknowlegement: Special thanks to my tutor Hayden, who helped me design, debug & helped me understand this assignment.


#ifndef CANVAS_MAKE
#define CANVAS_MAKE


char** createCanvas(int width, int height);

void printCanvas(char** Canvas, int width, int height);

void freeCanvas(char** Canvas, int width, int height);

#endif

