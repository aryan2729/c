#include<stdio.h>

int main(){

    // POINTER ARITHMETIC USING 🍁INTEGER POINTER | int 4 diff 
    int a = 5;
    int *ptr = &a ;
    printf("The address of a is %u \n", &a );       // u can use %u for unused non negative number 
    printf("The address of a is %u \n", ptr);
    ptr++; // it's change address to more 4 cuz in int 4  from 340404 to 340408  | keep in mind this not change the value of a 

    printf("The value of ptr is %u ", ptr);


    //  POINTER ARITHMETIC USING 🍁 CHARACTER POINTER | char 1 diff
    char b = 'B';
    char *ptr1 = &b;     
    printf("The address of b is %u \n", &b );
    printf("The address of b is %u \n", ptr1 );
    ptr1++; // it's change from 1 froward 

    printf("The value of ptr1 is %u \n", ptr1);


    return 0;
}