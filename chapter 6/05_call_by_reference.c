#include<stdio.h>

// (call by reference)  it passes actual address of 
//  variable so if we change it , it will reflect in 
// actual variable .....
// *->  value at | & -> address at (ampercent)

int sum(int *, int *);

int sum(int *a , int *b ){

     *a = 5 ;

    return *a + *b ;
}

int main(){

    int x = 1 , y = 6;

    printf("The sum of 1 and 6 is %d \n", sum( &x, &y));  // we need to pass &x and &y so it take it's address

    printf("X value changed due to call by reference from 1 to 5 => %d \n", x);
    

    return 0;
}