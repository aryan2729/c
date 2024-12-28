#include<stdio.h>

int main(){

    
    int marks[] = { 23, 45,32,45};

    int *ptr = &marks[0]; 
    // int *ptr = marks; same above 

    for (int i = 0; i <4 ; i++){

        printf("The marks at index %d is %d \n", i , *ptr);
        //same as marks[i];
        ptr++;
    }


    return 0;
}   