#include <stdio.h>

int main()
{

    int a[50], n, x, y, temp;

    printf(" Enter the Number of Elements you want in the array ");

    scanf("%d", &n);

    printf("Please Enter the Value of Elements: ");

    for (x = 0; x < n; x++)

        scanf("%d", &a[x]);

    for (x = 0; x < n - 1; x++)
    {
        for (y = 0; y < n - x - 1; y++)
        {

            if (a[y] > a[y + 1])
            {

                temp = a[y];

                a[y] = a[y + 1];

                a[y + 1] = temp;
            }
        }
    }
    printf("Array after  sorting : ");

    for (x = 0; x < n; x++)
    {

        printf("%d  ", a[x]);
    }

    return 0;
}