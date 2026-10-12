//Phil Ramos - canvasMake.c file holds all the functions that generate chars & spaces
//Acknowlegement: Special thanks to my tutor Hayden, who helped me design, debug & understand this assignemnt.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "canvasMake.h"

static int randCounter = 5;

static char pickChar(char *charizardMemory, int size){
   //generate a random integer from 0 to the last spot of the list & save it so m.
   //srand(time(NULL) + randCounter * 2);
   int m = rand()%size;
   //return the random character.
   return charizardMemory[m];

}

static char genRandomChar(double charChance, char *charList,int size){
   
    // srand(time(NULL) + randCounter);
    //fix for mac OS generating bad random first
    rand();
   //generate random number
   int gen = rand();
  
   //normalize the chance to the random number range
   int charChanceValue = charChance*RAND_MAX;

   //if the random number is less than the chance threshold
   //then return a character.
   if (gen < charChanceValue){
      return pickChar(charList, size);
   }
   //if the random number is greater than or equal to the threshold then return a space.
   else{
      return ' ';
   }

}

//create the canvas
char** createCanvas(int width, int height){
   //allocates the space for the holding the pointers of the array
   char **Canvas = malloc(height * sizeof(char *));
   //allocates space for each row 
   for (int i = 0; i < height; i++) {
      Canvas[i] = malloc(width * sizeof(char));
   }
   //list used for returning a character
   char validCharacters[8] = {'c', 'o', 's', '1', 'e', 'p', 'z', 't'};
   //nested for loop that fills the canvas that malloc created.
   //r & c for loop goes through each & fills it in with either a character or a space.
   for (int r = 0; r < height; r++){
      for (int c = 0; c < width; c++){
         Canvas[r][c] = genRandomChar(0.2, validCharacters, 8);
         randCounter++;
         srand(time(NULL) + randCounter);
      }
   }
   //the finished grid is handed back to return Canvas
   return Canvas;

}




//print the canvas using similar nested for loop logic with r & c.

void printCanvas(char** Canvas, int width, int height){
   for (int r = 0; r < height; r++){
      for(int c = 0; c < width; c++){
         printf("%c", Canvas[r][c]);
      }
      printf("\n");
   }
}

//clean up the memory because malloc borrows it from the computer.
 void freeCanvas(char** Canvas, int width, int height){

   for (int i = 0; i < height; i++){
      free(Canvas[i]);
   }
      free(Canvas);
}

