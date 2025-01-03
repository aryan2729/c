#include<stdio.h>

int main(){

     FILE *ptr;
    ptr = fopen("harr3y.txt","r");       // r-> read mode 

    if( ptr == NULL ) {
        printf("The file doesn't exist sorry!\n");
    }
    else { 
        int num;
    fscanf(ptr , "%d", &num );      // this store the first integer in num 
    printf("The value of num is %d \n", num);


    fscanf(ptr , "%d", &num );      //  //🚀 fscanf  ->  to read formatted data from a file and write it into memory
    printf("The value of num is %d \n", num);
    }

    fclose(ptr);    // 🚀 close the file (important) at end 

    return 0;
}