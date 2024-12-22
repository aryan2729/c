#include<stdio.h>

int main(){

    // M.I. 🚀 Learn for clg exams 

    long income , tax = 0;

    printf("Enter your income : \n");
    scanf("%ld", &income);                   

    if(income <= 250000){
        tax = 0;
    }
    else if(income > 250000 && income <= 500000 ){
        tax = 0.05 * (income - 250000);                 // cuz 250000 tax = 0
    }
    else if(income > 500000 && income <= 1000000 ){
        tax = 0.05 * (500000 - 250000) + 0.2 *(income - 500000);            // subtract  above limits of all if and else if keep in mind
    }
    else{                                                                       // if income > 1000000
        tax = 0.05 * (500000 - 250000) + 0.2 *(1000000 - 500000) + 0.3 * (income - 1000000);
    }

    printf("You need to give %ld tax ", tax);

    return 0;
}