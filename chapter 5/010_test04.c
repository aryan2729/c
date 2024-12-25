#include<stdio.h>


//🚀 Write nth element of fibonacci series  (0,1,1,2,3,5,8,13,21...)
// Fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)      | M.i.🔥 for clg 


int fibonacci(int n){

    if(n==1 || n== 2) return n-1 ;          // || -> or  | n = 1 so return 0 and n= 2 return 1 

    return  fibonacci(n-1) + fibonacci(n-2) ;
}


int main(){


    int n ;
    scanf("%d", &n );

    printf("The %dth element of fibonacci series is %d", n , fibonacci(n) );    


    // for(int i = 1; i<= n ; i++){     // for print full fibonacci series 
    //     printf("%d ",fibonacci(i));
    // }



    return 0;
}