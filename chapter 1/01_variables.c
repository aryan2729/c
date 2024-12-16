#include<stdio.h>           // In c++ #include<iostream>

int main (){

    printf("Hello world");                  // cout In c++

    int a ; // Variable declaration 
    a  = 6; // varibale initialization 
    printf("\nThe output of this program is %d ",a);   // M.I. 🔥  "%d" used for as an int  

    float b = 4;
 
    char c = 'd';                       // character only in single quote 


    // memory -> int (4 bytes = 32 bits) , flaot (4 bytes = 32 bits) , char (1 byte = 8 bits)

    printf("size of int : %zu bytes \n",sizeof(int));           // %zu for size 


    /* multi line comment 
    comments */

    // single line comment 

    printf("The value of a is %d \n" , a);          // for integer print use %d
    printf("The value of b is %f \n" , b);          // for float_ print use %f 
    printf("The value of c is %c \n",c);           // for chararact print use %c

    return 0;
}