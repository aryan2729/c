#include <stdio.h>

int main(){

    // Array in memory is like continguous block  like address 39394 39398 39402 for int 
    
    int marks[5];  

    printf("Enter marks of 5 students\n");
 
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

      for (int i = 0; i < 5; i++)
    {
        printf("The address of marks at index %d is %u \n", i, &marks[i]);
    }
    
 
    return 0;
}