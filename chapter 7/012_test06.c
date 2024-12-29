#include<stdio.h>

int count(int a[] , int n){

    int No_of_positive_int = 0;
    for(int i = 0 ; i< n ; i++){

        if(a[i]>0) {
            No_of_positive_int++;
        }
    }
    return No_of_positive_int;
}
int main(){

    int a[] = {1,2,3,4,5,-6,-7,8,9,10};

    printf("The number of positive integers in array is %d \n", count(a , 10));


    return 0;
}