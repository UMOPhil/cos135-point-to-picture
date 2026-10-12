//Phil Ramos - Main.c file holds all the functions that generate chars & spaces
//Acknowlegement: Special thanks to my tutor Hayden, who helped me design, debug & helped me understand this assignment.


#include <stdio.h>
#include <stdlib.h>
#include "canvasMake.h"


//function that runs everything & takes user input with argc & argv. 
//also accounts for edgecases if the user puts in too many arguments or not enough.
int main(int argc, char *argv[]){

    if (argc != 3){
        printf("wrong number of arguments\n");
        return 1;
    }
//converts text to numbers
    int width = atoi(argv[1]);
    int height = atoi(argv[2]);

    printf("width is %d and height is %d\n", width, height);
    //create print & free the canvas. 
    char** Canvas = createCanvas(width, height);

    printCanvas(Canvas, width, height);

    freeCanvas(Canvas, width, height);

    return 0;


}
