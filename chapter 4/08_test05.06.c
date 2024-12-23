#include<stdio.h>

int main(){
    printf("Write the n value\n");

    int i = 1; 
    int n;
    scanf("%d", &n);

    int sum= 0;

    while ( i<= n){

        sum += i;  // or sum = sum + i;
        i++;
    }   
    printf("The value of sum 1 to n numbers is : %d \n", sum);




    // same above for do-while and for loop 
    
    int j = 1; 
    int m;
    scanf("%d", &m);

    int sum1 = 0;

    do{
        sum1 += j;
        j++;
    }while(j <= m);
    printf("The value of sum1 is : %d \n",sum1);

    

    int p = 1; 
    int w;
    scanf("%d", &w);

    int sum2 = 0;

    for (int p = 1; p<= w ; p++){
        sum2 += p;

    }
    printf("The value of sum2 1 to w : %d ",sum2);


    return 0;
}


