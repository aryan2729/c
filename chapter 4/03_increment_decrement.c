#include<stdio.h>

int main(){

    int i = 5;
    i = i +5; // i = 10
    printf("The value of i is %d \n", i);

    printf("The value of i is %d \n",i++ ); // means first print then add +1  print -> 10 but added so next i = 11 if print 
    printf("The value of i is %d \n",++i ); // means first add + 1 then print -> 11 

    // i++ print i first and then increments i (post increment operator)
    // ++ i increment i first and then prints i ( post increment operator )

    
    return 0;
}