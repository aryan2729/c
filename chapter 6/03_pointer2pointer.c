#include<stdio.h>

int main(){

    int i = 6;
    int *j = &i ;
    int **k = & j;  // pointer of pointer j 

    printf("The value of i is %d \n", i);
    printf("The value of i is %d \n", *j ); // Print value at j which is directly related to i value 
    printf("The value of i is %d \n", *(&i) );  // * & = 1 it cut each other 
    printf("The value of i is %d \n ", **(&j) ); // it's also written i value cuz **(&j) = **(&&i); 
    return 0;
}