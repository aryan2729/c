#include<stdio.h>


    // Celsius temperature into Fahrenheit

    float fahrenheit(float c){

        float f = (c * 9)/5  + 32 ;

        return f;
    }

int main(){

    float n;
    printf("Write down the value in celsius \n");
    scanf("%f", &n);

    printf("The value in fahrenheit is %f ",fahrenheit(n) );





    return 0;
}