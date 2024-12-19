#include<stdio.h>

int main(){

    int a = 4;
    int b = 3;
    int c = a + b;
    printf("The value of a is %d and value of b is %d and sum is %d",a,b,c);

    // (%) Modulus operator is used to get the remainder 

    printf("The remainder when a is divided by b is : %d  \n" , a % b);  // a/b provide only remaining int 

    // Operators can be int/float/etc 
    int w = 2 , q = 3;
    int z  = w*q;
    // but b*c != z

//  An Arithmetic operation between
// • int and int → int
// • int and float → float
// • float and float → float

    int d = 9 ;
    int e = 2; 
    float f = d/e ;      //🔥 M.I. You think it's 4.5 but nott cuz int/int always int but if u do float /int then it will be float 

    printf("The value of d/e is %f \n", f);

    // int ddd = 3.5; // but it will take it as 3;



//🔥     OPERATOR PRECEDENCE
// The following table lists the operator priority in C
// Priority Operators
// 1st  * / %            for associativity left to right 
// 2nd  + -
// 3rd   =
// Operators of higher priority are evaluated first in the absence of parenthesis.


// 🔥    OPERATOR ASSOCIATIVITY
// When operators of equal priority are present in an expression, the tie is taken care of by
// associativity.
//          x*y/z → (x*y)/z
//          x/y*z → (x/y)*z
// (*, / follows left to right associativity)
// Pro Tip: Always use parenthesis in case of confusion
    
    //🔥 First Precedence then Associativity apply 

    int aaa = 3;
    int bbb = 6;
    int ccc = 9;

    printf("The value is %d \n",  aaa *bbb /ccc + 7 );
    printf("The value is %d  \n", 3*bbb/2*ccc + 7*aaa);
    // How precedence and assosiactivity work here 
    // 3*b/2*c + 7*a
    // 3*b/2*c + 21   first precedence -> * / % then + - then = 
    // 18/2*c + 21      now divide 
    // 9*c + 21
    // 81 + 21 = 102 


    // Typecasting 

    int n = 45;
    float m = 32.23;

    n = (int) m ;// convert the datatype to int 
    printf("%d \n" , n );



    
    return 0;
}
