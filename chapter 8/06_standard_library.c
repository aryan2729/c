#include<stdio.h>
#include<string.h>

int main(){

    //🍁 StandDard library function for strings  // for use first #include<string.h> above

    // strlen-> string length , strcpy-> string copy , strcat-> concatenate two strings. , strcmp-> used to compare two strings
    char st1[] = "Harry";

    printf("%d \n" , strlen(st1));      // strlen-> string legth 


    char st2[30];
    strcpy(st2, st1);    // strcpy-> copy strings 

    printf("%s %s \n", st1 ,st2);


    char a1[30] = "Hello";
    char a2[40] = " bhai";        //🍁 concatenate a2 should have one space first 
    strcat(a1,a2);              // a1 first then a2 ( should start with one space )

    printf("%s ", a1 );


    // strcmp ->This function is used to compare 
    // two strings. It returns 0 if the strings are
    // equal, a negative value if the first string's
    // mismatching character's ASCII value is less
    // than the second string's corresponding 
    // mismatching character, and a positive value
    // otherwise.


    return 0;


}