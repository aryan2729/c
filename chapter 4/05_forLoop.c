#include<stdio.h>

int main(){


// for (initialize; test; increment or decrement){
//      // code 
//      }

    for (int i = 0; i<= 10 ; i++){

        printf("The value of i is %d \n",i);
    }

    // decrementing for loop
    int n;
    printf("Write n value: \n");

    scanf("%d", &n );
    for(int j = n ; j>= 1 ; j--){
        printf("The value of n to 1  is %d \n",j);
    }

    return 0;
}