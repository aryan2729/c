#include<stdio.h>

int main(){

    FILE *ptr;

    ptr = fopen("names.txt", "w");

    char name1[23] , name2[23];
    int salary1 , salary2 ;

    printf("Enter the name of Employee \n");
    scanf("%s" , name1);        // & not req for string  | input 

    printf("Enter the salary of Employee \n");
    scanf("%d" , &salary1);         // & req in others except string 

    printf("Enter the name of Employee \n");
    scanf("%s" , name2);        

    printf("Enter the salary of Employee \n");
    scanf("%d" , &salary2);

    
    fprintf(ptr , "%s , %d \n", name1 , salary1 );       // fprintf to write data in a file using a stream object

    fprintf(ptr , "%s , %d \n", name2 , salary2 );

    fclose(ptr);



    return 0;
}