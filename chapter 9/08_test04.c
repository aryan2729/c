#include<stdio.h>

typedef  struct employee{

    int salary ;
    float score;
} emp;


int main(){

     emp e1;

     emp *ptr = & e1;

     ptr->salary=39339;             //(*ptr).salary =  etc
     ptr->score= 484.94455;

     printf("The value of salary is %d and score is %0.3f" , ptr->salary , ptr->score );


    return 0;
}