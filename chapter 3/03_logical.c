#include<stdio.h>

int main(){

//     USAGE OF LOGICAL OPERATORS:
// 1. && (AND) → is true when both the conditions are true
// a.   “1 and 0” is evaluated as false.
// b.   “0 and 0” is evaluated as false.
// c.   “1 and 1” is evaluated as true.
// 2. || (OR) → is true when at least one of the conditions is true. (1 or 0 → 1) (1 or 1 → 1)
// 3. ! (NOT) → returns true if given false and false if given true
//      a. b. !(3==3) → evaluates to false
//      !(3>30) → evaluates to true.


int a = 1; int b = 1;
printf("The value of a and b is %d \n",a && b ); // both codition true 
printf("The value of a or b is %d \n", a || b);   // if one condition true work 
printf("The value of not(a) is %d \n", !a);

if(a && b){
    printf("Both are true \n");


}


// If else_if else ladder
int age = 45;

    if(age >60){
        printf("You can drive and you are a senior citizen");
    }
    else if(age >40){
        printf("You can drive and you are elder");
    }
    else if(age >18){
        printf("You can drive");
    }
    else{
        printf("You cannot drive");
    }



// OPERATOR PRECEDENCE

// Priority     Operator
// 1st             !
// 2nd             *,/,%
// 3rd             +, -
// 4th             <>, <=, >=
// 5th             ==, !=
// 6th             &&
// 7th             ||
// 8th             =




    return 0;
}