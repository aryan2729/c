#include<stdio.h>
#include<string.h>  // for use strcpy , strlen, etc 

// M.i🔥
// Array and strings → Similar data (int, float, char).
// Structures can hold → Dissimilar data.
// structure declares always above main() fun

struct employee
{
    int code;           
    float salary;
    char name[10];
};          //🚀 semicolon is important 


int main(){

    struct employee e1 , e2;    //  creating a structure variable 
    
    // e1.name = "harry";   U can't define string like this 

    strcpy(e1.name , "harry");      // for use this first define on top string.h
    e1.code = 234;
    e1.salary = 2000.89;

    printf("%d %f %s",e1.code , e1.salary , e1.name);


    return 0;
}