#include<stdio.h>

int main(){

    
    FILE *ptr;

    ptr = fopen("double.txt", "r");

    int num;

    fscanf(ptr , "%d" , &num);      // stored int value in num 

    fclose(ptr);            // then close the file 

    ptr = fopen("double.txt", "w");

    fprintf(ptr , "%d" , 2*num ) ;          // for printing in file we don't need & but when reading by scanf then we will but in case of string not 

    


    return 0;
}