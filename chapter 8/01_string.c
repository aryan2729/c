#include<stdio.h>

int main(){

    // char st[] = { 'a', 'b','c','\0'};
    char st[] = "abc";      // also can write as above 

    for (int  i = 0; i < 3; i++)
    {
        printf("%c", st[i]);    // 🔥for character print use -> %c
    }
    
    // either used %c for printing but it prints only character wise that's y we used %s -> for string 

    printf("%s" ,st);       //🚀 direct print string 


    return 0;
}