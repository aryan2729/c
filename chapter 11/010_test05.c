#include<stdio.h>
#include<stdlib.h>

int main(){

    int n = 10;
    int *ptr;

    ptr = (int *)malloc( n *  sizeof(int));

   
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7*(i+1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d \n" , ptr[i]);
    }


    ptr = (int*)realloc( ptr , 15 * sizeof(int));

    n = 15;

    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7*(i+1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d \n" , ptr[i]);
    }


    




    return 0;
}