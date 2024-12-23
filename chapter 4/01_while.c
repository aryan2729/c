#include<stdio.h>

int main(){

    int i = 1;
    while (i < 10){
        printf("The value of i is %d \n",i);
        i++;
    }
    
//     Quick Quiz: Write a program to print natural numbers from 10 to 20 when initial loop
// counter is initialized to 0.


    int j = 0;
    while(j<=20){
        if(j>=10){
            printf("%d \n",j);
            
        }
        j++;
    }

    return 0;
}