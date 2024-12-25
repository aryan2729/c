#include<stdio.h>

int main(){

    // types of pointers | %p == for print pointer 


    // if it's character then pointer should be same as character 
    char i = 'A';  
    char *j = & i; // j is a pointer pointing to i ( j is a character pointer)

    printf("The address of i is %p \n", &i );  // address of i  
    printf("The address of i is %p \n", j );   // print address of i cuz it storing address of i | for value -> *j

    printf("The value at j %c \n", *j);   // | %c cuz it's character which we want to print 





    return 0;
}