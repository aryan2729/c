#include<stdio.h>

int main(){

    FILE *ptr;
    ptr = fopen("file.txt","r");

    int num1 , num2 , num3;

    fscanf(ptr , "%d %d %d", &num1 , &num2 , &num3);

    printf("The three integers are %d %d %d \n", num1 ,num2 , num3);
    
    fclose(ptr);

    return 0;
}