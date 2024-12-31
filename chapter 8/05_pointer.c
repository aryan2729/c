#include<stdio.h>

int main(){

    
    //🔥🔥 DECLARING A STRING USING POINTERS

    

    /* but y we use pointer ?
    NOTE (m.i.p)
      1.Once a string is defined using 
        char st [] = “harry”, it cannot be
        reinitialized to something else.
      2.A string defined using pointers can
        be reinitialized. */

    char *ptr = "harry";

    printf("%s \n", ptr);

    ptr = "HEllo ";

    printf("%s \n", ptr);       // by pointer we can change string but by char s[] we can't further

    
    
    //🔥🔥M.i.m(while using scanf for string we don't use &(ampercent) )


    return 0;
}