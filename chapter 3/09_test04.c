#include<stdio.h>

int main(){

    // M.I. 🔥 for clg exams 

    int year;
    printf("Enter year: \n");
    scanf("%d", &year);         // always add & before name 

    if( (year %4 == 0 && year %100!= 0) || year %400 == 0 ){  // either year is give 0 in modulus of 4 and year in modulus of 100 not give zero or ||  either year modulus of 400 give zero then leap year
        
        printf("This is a leap year");
    }
    else{
        printf("This is not a leap year");
    }

    return 0;
}       