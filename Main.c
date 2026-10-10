#include <stdio.h>
#include <stdlib.h>

#include "canvasMake.h"



int main(int argc, char *argv[]){

    if (argc != 3){
        printf("wrong number of arguments\n");
        return 1;
    }

    int height = atoi(argv[1]);
    int width = atoi(argv[2]);

    printf("width is %d and height is %d\n", width, height);

    char** Canvas = createCanvas(width, height);

    printCanvas(Canvas, width, height);

    freeCanvas(Canvas, width, height);

    return 0;


}
