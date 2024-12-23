#include<stdio.h>

int main(){

    // Break -> exit the loop and continue -> skip that value 

    for (int i = 1; i<= 10 ; i++){
        
        if( i == 5){
            continue;;
        }
        printf("The value of i is %d \n", i);

    }

    for(int j = 1 ; j<= 5; j++){

        if(j == 4) break;   // exit the loop
        printf("The value of j is %d \n", j);
    
    }

    return 0;
}