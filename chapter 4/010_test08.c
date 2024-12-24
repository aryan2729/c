
#include<stdio.h>

int main(){

    // factorial
    // 8! = 1X2X3X4X5X6X7X8
    // 4! = 1X2X3X4 

    // for loop 
    int product = 1;        // start from 1 
    int n;
    printf("Write down n value for which you want factorial \n");
    scanf("%d", &n);

    for (int i = 1; i <=n; i++){
        
        product = product * i ;     // product *= i
    }
    printf("The factorial of %d is %d \n", n , product);


    // while loop 
    int product1 = 1;        // start from 1 
    int m;
    printf("Write down n value for which you want factorial \n");
    scanf("%d", &m);

    int j = 1;
    while(j <= m ){
        product1 *= j;
        j++;
    }
    printf("The factorial of %d is %d \n", m , product1);



    // Do while loop 
    int product2 = 1;        // start from 1 
    int p , b = 1;
    printf("Write down n value for which you want factorial \n");
    scanf("%d", &p);

    do{
        product2 *= b;
        b++;
    }while(b<= p);

    printf("The factorial of %d is %d \n", p , product2);

    return 0;
}