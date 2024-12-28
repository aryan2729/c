#include<stdio.h>

void change_to_10_times(int *);             // always write function prototype 

void change_to_10_times(int *a ){

    *a = (*a) * 10 ;
}


int main(){

    
    int i = 4;

    printf("The value of i is %d \n",i);

    change_to_10_times( & i);       // changing the value of i by call by reference 

    printf("The value of i after 10 times is %d \n", i );

    

    return 0;
}