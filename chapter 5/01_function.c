#include<stdio.h>



// WHAT IS A FUNCTION?
// A function is a block of code which performs a particular task.
// A function can be reused by the programmer in a given program any number of times.

    
// Function must before main 


// function prototype  -> function ideclaration of a
// function that specifies its name, return type, and
// parameter but does not include body of function. 
int sum(int x, int y);


int sum(int x, int y){          // function body

    return  x + y ;
};


// Void function - No return 

void display(){
    printf("Hello");
};


int main(){

    int a = 1 , b = 3;
    int p = sum(a , b);     // function call 
    printf("%d \n", p);

    int a1 = 5 , b1 = 5;
    int m = sum(a1 , b1);
    printf("%d \n", m);

    display();            // function call   












    return 0;
}