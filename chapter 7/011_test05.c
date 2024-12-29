#include<stdio.h>

void printArray(int a[], int n){
    for(int i = 0 ; i< n ; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void ReverseArray(int a[] , int n ){
    // for 0 to n/2 in a[i] to a[n-i-1] (last) 
    int temp;
    for(int i = 0 ; i < n/2; i++){

        temp = a[i];                // swap first index to last index then 2nd index to second last index
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}


int main(){

    int arr[] = {1,2,3,4,5,6 } ;

    printArray(arr,6);
    ReverseArray(arr , 6);
    printArray(arr,6);

    return 0;
}