#include<stdio.h>

int main(){

    //🍁  gets  in string 

    //🍁🍁 gets-> Used for input string which stores multi-word-string-with  space also | and keep in mind use fgets instead of gets cuz it's buffer overflow 
    char st[30];    
    
    gets(st);     // 🚀The entered string is stored in st!

    printf("%s", st);




    return 0;
}