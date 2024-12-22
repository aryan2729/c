#include<stdio.h>

int main(){

    
    // M.i. 🔥 FOr clg exams 

    char ch ;
    printf("Write the character that you want to check is it lowercase or not \n");

    scanf("%c" , &ch);

    printf("The character is %c \n",ch);
    printf("The value of character is %d \n",ch);      // this will tell ascii value 

    // 97(a) and 122 (z)

    if( ch>= 97 && ch <= 122){
        printf("This character is lowercase \n");        
    }
    else{
        printf("This character is not lowercase \n");
    }

    return 0;
}