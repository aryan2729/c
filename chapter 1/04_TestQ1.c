#include<stdio.h>

int main(){

// Area of rectangle by given values and input 
    
    // by given 
    int length = 3;
    int breadth = 6;
    
    printf("The area of this reactangle is %d \n", length * breadth);


    // by input 
 
    int leng , breadt ;

    printf("Enter length \n");
    scanf("%d", & leng);         // u're forgeting  (& length) REMEMBER IT  

    printf("Enter breadth \n");
    scanf("%d", & breadt);

    printf("The area of this rectangle is %d" , leng * breadt);
    
    return 0;
}