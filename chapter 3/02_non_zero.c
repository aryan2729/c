#include<stdio.h>

int main(){

    
    // The condition can be any valid expression. In C a non-zero value is considered to be true ...

    if(1){
        printf("This if is executed \n");
    }
    if(234){
        printf("This if is executed \n");
    }
    if(2.7){
        printf("This if is executed \n");
    }
    if('c'){
        printf("This character inside if is also executed \n");
    }
    if(0){
        printf("I am zero (0) - I'm not executed \n");
    }

    return 0;
}