#include<stdio.h>

// sum of n natural numbers by recursion 

int sum_natural(int);  

int sum_natural(int n){

    if(n==1) return 1 ;

    return sum_natural(n-1) + n ; 
}


int main(){

    int n = 5;
    printf("The sum till %dnth number is %d \n",n , sum_natural(n));


    return 0;
}