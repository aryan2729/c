#include<stdio.h>
#include<string.h>


struct employee{

    int code ;
    float salary ;
    char name[10];

};      // semicolon is important 


int main(){

    struct employee facebook[100];      // an array of structures

    // we can access the data using:
    facebook[0].code = 100;
    facebook[0].salary = 884.49333;
    strcpy(facebook[0].name , "Harry");

    facebook[1].code  = 484;

    printf("%d %f %s \n", facebook[0].code , facebook[0].salary , facebook[0].name);
    

    //🚀 Initalizing structure new way

    struct employee harry = {100 , 4000.00 , "Hello"};  
    struct employee shubh ={0};               // all elements set to 0

    printf("%d %f %s \n",harry.code , harry.salary , harry.name );
    return 0;
}