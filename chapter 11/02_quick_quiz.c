#include<stdio.h>
#include<stdlib.h>
int main(){

    float n = 5;
    float *ptr;

    ptr = (float *) malloc(n * sizeof(float)); 

    ptr[0] = 3.747474;
    ptr[1] = 2.747474;
    ptr[2] = 5.747474;
    ptr[3] = 59.747474;
    ptr[4] = 95.747474;


    for(int i = 0; i< n ; i++){
        printf("%.2f \n", ptr[i]);
    }

    return 0;
}