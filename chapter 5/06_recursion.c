#include<stdio.h>

// Recursion 

// Factorial(5) = 1X2X3X4X5

int factorial(int n){
    
    if(n== 1 || n ==0 ){            // base condition . Req cuz if not give then computer will run and not stop 
        return 1;
    }

    return factorial(n-1) * n;            // factorial(n)= factorial(n-1) X n
}


int main(){

    int a = 4;
    printf("The factorial of %d is %d ", a , factorial(a));

    return 0;
}