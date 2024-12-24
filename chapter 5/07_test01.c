#include<stdio.h>

float average(int a , int b , int c);   // func prototype 

float average(int a, int b , int c){
    
    return (a+b+c)/3.0 ;            // 3.0 cuz we want float in return cuz if average of 3 no. it give float not int 
}


int main(){

    int a=3 , b = 5, c = 4;
    printf("The average of a , b and c is %f", average(a,b,c));
    


    return 0;
}