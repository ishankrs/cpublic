#include "stdio.h"
int main()
{

    int input, a, a2, b = 1, c = 0, d;

    scanf("%d", &input);
    a = input;
    a2 = input;
    while (a != 0)
    {
        a = a / 10;
        b++;
    }
    b--;

    while (c < b)
    {
        a2 = a2 % 10;
        printf("%d", a2);
        a2 = a2 / 10;
        c++;
    }
}