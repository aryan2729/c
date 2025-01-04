#include<stdio.h>

int main(){

    // File append 

    FILE *ptr;

    ptr = fopen("harry.txt","a");   // a-> append

    fprintf(ptr , "%s" , "\nAppending in file in string format");    // fprintf to write data in a file using a stream object

    fclose(ptr);


    return 0;
}