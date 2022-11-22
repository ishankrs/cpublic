#include "stdio.h"
int main()
{
    int a, b, prod = 1, c;
    printf("Enter a number to find product of its digit");
    scanf("%d", &a);
    c = a;
    while (a != 0)
    {
        b = a % 10;
        prod = prod * b;
        a = a / 10;
    }
    printf("\nProducts of digits of %d is %d", c, prod);
}