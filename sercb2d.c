#include "stdio.h"

int main()
{
    int a[3][2], i, n, x, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the specific element : ");
    scanf("%d", &x);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (a[i][j] == x)
            {
                printf("element was found ");

                printf("its at a[%d][%d]", i, j);
                return 0;
                
            }
        }
    }

    printf("element  not  found");
}