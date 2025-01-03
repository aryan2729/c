#include<stdio.h>

int main(){

    
    // If u wanna print whole file 

    FILE *ptr;
    ptr = fopen("harry.txt" , "r");     // should be in read mode 

    char ch;

    while (1){

        ch = fgetc(ptr);  
        printf("%c", ch);      

        if(ch== EOF){       // EOF = End Of File 

            break;
        }
    }
    
    fclose(ptr);



    return 0;
}