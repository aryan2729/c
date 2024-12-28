#include<stdio.h>

int main(){
    
    int i = 2;
    int *ptr = &i;
    printf("The address of i is %p \n", &i);
    printf("The value of i is %d \n", *ptr );
    

    return 0;
}

