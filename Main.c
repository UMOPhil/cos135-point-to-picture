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

    char myList[5] = {'f', 'i', 'r', 'e'};

    printf("width is %d and height is %d\n", width, height);

    char c = genRandomChar(.5, myList, 4);
    printf("%c\n", c);

    return 0;

}
