#include<stdio.h>
#include<stdlib.h>  // cuz using malloc etc

int main(){

    // malloc ->  malloc stands for memory allocation. It takes number of bytes to be allocated as an input and returns a pointer of type void.

    int n;
    int *ptr;           // pointer
    
    scanf("%d", &n); 
    
    // int arr[n];  // Not allowed in C | below line work 
    ptr = (int *) malloc(n * sizeof(int));

    ptr[0]= 3;
    ptr[1]= 6;

    printf("%d" , ptr[0]);



    return 0;
}