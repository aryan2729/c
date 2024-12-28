#include<stdio.h>

int main(){

    int cgpa[] = { 9 , 8 , 9} ;    // u can define like this also  , automatic fetch 

    // also this -> int cgpa[3] = { 9 , 8 , 4}; 


    for(int i = 0; i < 3 ; i++){
        printf("The value of array at index %d is %d \n", i , cgpa[i]);
    }
    return 0;
}  