#include<stdio.h>

int main(){


//     FILE POINTER
// A “FILE” is a structure which needs to be created for opening the file.
// A file pointer is a pointer to this structure of the file.
// (FILE pointer is needed for communication between the file and the program).

// File open
    FILE *ptr;
    ptr = fopen("harry.txt","r");       // r-> read mode | (fileName , "mode");

    int num;
    fscanf(ptr , "%d", &num );         //🚀 fscanf  ->  to read formatted data from a file and write it into memory
    printf("The value of num is %d \n", num);


    fscanf(ptr , "%d", &num );      //🚀 fscanf  ->  to read formatted data from a file and write it into memory
    printf("The value of num is %d \n", num);

    fclose(ptr);    // 🚀 close the file (important) at end 


// Note ->
// "r" -> open for reading
// "rb" -> open for reading in binary
// "w" -> open for writing // If the file exists, the contents will be
// overwritten
// "wb" -> open for writing in binary
// "a" -> open for append // If the file does not exist, it will be created

    return 0;
}