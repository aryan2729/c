#include<stdio.h>

int main(){

    
    int a = 4 , b = 3 , c = 2 , d = 5;

    if( a > b && a > c && a > d ){
        printf("The greatest of all is %d ",a);
    }
    else if( b > a && b > c && b > d ){
        printf("The greatest of all is %d ",b);
    }
    else if( c > a && c > b && c > d ){
        printf("The greatest of all is %d ",c);
    }
    else{
        printf("The greates of all is %d", d);

    }
    

    return 0;
}