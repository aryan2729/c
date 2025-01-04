#include<stdio.h>




int main(){

    FILE *ptr;
    ptr = fopen("multi.txt","w");

    int n ;
    printf("Write the number for print multiplication table \n");

    scanf("%d", &n);
    
    for(int i = 1; i<= 10 ; i++){

        fprintf(ptr , "%d" , n*i);
        fprintf(ptr , "\n");
    }

    
    fclose(ptr);
    
    return 0;
}
