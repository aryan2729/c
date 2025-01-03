#include<stdio.h>

int main(){

    // fgetc -> is used to read the character only ( obviously u need to open the file with "r" mode)
    // fputc -> is used to write one character ( obviously u need to open the file with "w" mode )

    FILE *ptr ;

    ptr = fopen("harry2.txt", "r");
    
    char c = fgetc(ptr); // used to read a character 

    printf("%c", c); 
    fclose(ptr);


    FILE *ptr2;

    ptr2 = fopen("harry2.txt", "a");
    fputc('c',ptr2);     // used to write  character in file 

    fclose(ptr2);





    return 0;
}