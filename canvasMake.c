#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "canvasMake.h"



char pickChar(char *charizardMemory, int size){
   //generate a random integer from 0 to the last spot of the list & save it so m.
   srand(time(NULL));
   int m = rand()%size;
   //return the random character.
   return charizardMemory[m];

}


// //suppose to return either a space or a random character based on the probabililty given?? and the list?

// //so this function needs to access my previous list & return a character OR space 20% and 80% of the time?
// //how do we return a character or space based on given probability?
// //is that also a function in C for the probability part?

// char genRandomChar(char *charizardMemory, int size){

// //returns random character or space?

//  int r = rand() / ;

//  //possible to condense this with a for loop?

//  if (r < int size){

//     return r;

//  } else {
     
//     return ' ';
//  }

// }


// //is this datatype right for the freeCanvas function?

// char freeCanvas(){


// }


// createCanvas(){

// }

// //how do pointers relate to the arrays we are generating?
// //the arrays give us height and width through pointers?