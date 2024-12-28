#include<stdio.h>

// Arrays = is a collection of similar elements 


int main(){

    int marks[90]; // Reserve space to store 90 integers

    marks[0] = 45;
    marks[1] = 95;

    // we can go all the way till marks[89]
    printf("Marks 0 and Marks 1 is %d and %d ", marks[0] , marks[1]);

    
    return 0;
}