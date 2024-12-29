#include<stdio.h>

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};     // array of 10 no.s

    int *ptr = &arr[0];

    printf("The value at index 0 is %d \n", *ptr );
    
    printf("The value at index 3 is %d \n", *(ptr+2) );



    return 0;
}