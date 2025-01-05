#include<stdio.h>
#include<stdlib.h> // used for memory allocation etc


int main(){

    int n;
    int *ptr;
    scanf("%d" , &n);
    ptr = (int *) malloc( n * sizeof(int));

    ptr[0] = 34;
    ptr[1] = 3;
    printf("%d", ptr[0]);

    free(ptr);      //We can use free() function to deallocate the memory. The memory allocated using calloc/malloc is not deallocated automatically. 

    return 0;
}