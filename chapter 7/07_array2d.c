#include <stdio.h>

int main()          // 2d array
{
    int arr[3][2];

    for (int i = 0; i < 3; i++)         // for first []         
    {
        for (int j = 0; j < 2; j++)     // for second []
        {
            printf("Enter the value of arr[%d][%d]\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}