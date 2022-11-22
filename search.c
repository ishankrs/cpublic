#include "stdio.h"

int main()
{
    int a[100], i, n, x, j;

    printf("Enter size of the  array  :");
    scanf("%d", &n);
    printf("Enter elements in array:  ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the specific element : ");
    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf("element was found ");
            j = i + 1;
            printf("its at %d  position", i);
            return 0;
        }
    }

    printf("element  not  found");
}