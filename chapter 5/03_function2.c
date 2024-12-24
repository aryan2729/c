#include<stdio.h>


int sum(int a , int b){        // a & b are Parameters 
    int c ;                   
    c = a + b ;
    return c ;
}

int main(){

    int d = sum(2,3);           // 2 , 3 are arguments 
    printf("%d", d);


    

    return 0;
}