#include<stdio.h>


float force(float mass);  // function prototype

float force(float mass){

    return mass * 9.8 ;
}


int main(){

    int mass = 45;
    printf("The value of force is %0.2f \n", force(mass) );         // %0.3f --> means till 3 digit after 

    

    return 0;
}