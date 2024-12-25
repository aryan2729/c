#include<stdio.h>

int main(){

    //🔥 * -> value at , & -> address at (ampercent)


    int i = 72;
    int* j = &i ; // j is a pointer pointing to i  (j is an integer pointer )

    printf("The address of is is %p \n", &i );   //  %p -> for pointer | address of i direct 
    printf("The address of i is %p \n", j);     // cuz j stores address of i 

    printf("The value at address j is %d \n",*j ); // *j -> 72 cuz it stores address of i 

    printf("The value at i is %d \n", *(&i) );  // keep is mind if *& = 1 if **& = * cuz * and & cut each other 


    return 0;
}