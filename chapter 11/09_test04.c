#include<stdio.h>
#include<stdlib.h>

int main(){

    int n = 6;
    int *ptr;

    ptr = (int *)malloc( n *  sizeof(int));

   
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d \n" , ptr[i]);
    }


    ptr = (int*)realloc( ptr , 10 * sizeof(int));
    printf("After realloc\n Now enter 10 numbers");

    n = 10;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d \n" , ptr[i]);
    }


    




    return 0;
}