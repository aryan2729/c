#include<stdio.h>
#include<stdlib.h> // for memory allocation etc


int main(){

    // calloc -> stands for continuous allocation. It initializes each memory block with a default value of 0.

    int n;
    int *ptr;

    scanf("%d" , &n );
    ptr = (int *) calloc(n , sizeof(int));

    ptr[0]= 3;
    ptr[1]= 6;

    printf("%d" , ptr[0]);

    
    
    
    
    return 0;
}