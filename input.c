#include "stdio.h"                           //Number of includes 
#include "stdlib.h"

int main () {
    int a, b, c;                             //list of decleration 

    float y;                                 //Data Types
    char z;
    double x = 2;                            //Decleration and Defination

    a = 1;                                   //Defination 
    
    if(a>0){                                 //If Statement
        printf("a is positive");
        a = 8;
    }

    for(int i=0;i<5;i++){                    //Nested for loops
        for ( z=0 ; z<9 ; z=z+1){
             printf("z is %d", z);
        }
        printf("i is %d", i);
    }

    while (a < b)                            //while statement
    {
        a = 6;
        b = 7;
    }

    do{                                      //Do while statement and float numbers 
        a = 6.5E-10;                         //Float Numbers
        b = 7.5 ;
    }while (a<c);

    c = a + b;                              

    return 0 ;                               //Return Statement
}

/* This some of cases that our code can handle,
 including the removal of comments prior to tokenization. */
 