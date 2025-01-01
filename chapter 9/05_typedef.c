// typedef is used to make your own datatype
#include<stdio.h>
#include<string.h>


// typedef 🚀

typedef struct employee{

    int code;
    float salary;
    char name[10];
} emp;  //🔥 emp is typedef of employee structure 

int main(){

    // Rather then using whole 
    // struct employee e1;
    // we use 
    emp e1;
    e1.code = 4533;
    e1.salary = 3333.99999;
    strcpy (e1.name , "harry");

    printf("%d %f %s \n", e1.code , e1.salary , e1.name);


    return 0;
}