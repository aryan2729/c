#include<stdio.h>

int main(){

// Q 1
    int n ;
    printf("Write the number : \n");
    scanf("%d", &n);   // always in input add & n

    for(int i = 1; i<=10 ; i++){

        printf("%d X %d = %d \n" , n , i , n*i);
    }

// Q2

    int m ;
    printf("Write the number : \n");
    scanf("%d", &m);   // always in input add & n

    for(int i = 10; i>=1 ;i--){

        printf("%d X %d = %d \n" , m , i , m*i);
    }




    return 0;
}   