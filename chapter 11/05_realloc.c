#include<stdio.h>
#include<stdlib.h> // used for memory allocation etc


int main(){

    int n;
    int *ptr;
    scanf("%d" , &n);
    ptr = (int *) malloc( n * sizeof(int));

    ptr[0] = 34;
    ptr[1] = 3;
    
    // Sometimes the dynamically allocated memory is insufficient or more than required. realloc is used to allocate memory of new size using the previous pointer and size.
   
    ptr = (int *) realloc(ptr , 10 * sizeof(int));


    return 0;
}