#include<stdio.h>

int main(){

    int subject1 ,subject2 , subject3;
    
    printf("Enter marks1 : \n");
    scanf("%d" , &subject1);
    printf("Enter marks2 : \n");
    scanf("%d", &subject2);
    printf("Enter marks3 : \n");
    scanf("%d",&subject3);

    printf("The marks are %d %d and %d \n", subject1 , subject2 , subject3);

    if(subject1 < 33 || subject2 < 33 || subject3 < 33){        // || or means if any condition true then work 
        printf("You are failed due to less marks in individual subject(s)");
    }
    else if( (subject1 + subject2  + subject3)/3 < 40 ){        // for overall percentage less then 40 
        printf("You are failed due to less percentage ");
    }    
    else{
        printf("You are passed");
    }


    return 0;
}