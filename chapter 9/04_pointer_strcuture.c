#include<stdio.h>


struct employee {       

    int code ;
    float salary;
    char name[10];
};  // semicolon is important 



int main(){

    struct employee e1;
    e1.code = 56;

    struct employee *ptr;
    ptr = &e1;

    // now we can print structure elements using :
    
    printf("%d", (*ptr).code );         
    printf("%d", ptr->code );   // arrow operator = ptr->code also can print

    return 0;
}