#include<stdio.h>

// call by value it passes copy so the main variable don't change 


int sum(int , int );

int sum(int a , int b ){

     a = 1;

    return a + b ;
}

int main(){

    int x = 1 , y = 6;

    printf("The sum of 1 and 6 is %d \n", sum(x,y));

    printf("Checking a value changed or not  it's not change remains same as %d \n", x);
    

    return 0;
}