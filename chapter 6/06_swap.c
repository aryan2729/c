#include<stdio.h>


//🚀 Swap two variables 


void swap(int * a , int * b); 

void swap(int *a , int *b ){                // for value at 

    int temp ;
    temp = *a ;
    *a = *b ;
    *b = temp;
}

int main(){

    int a = 3;
    int b = 4;

    swap( & a , & b);    //🍁 must passing address 

    printf("Now a value is %d and b value is %d \n", a , b );    

    return 0;
}