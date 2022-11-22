#include "stdio.h"
int main()
{
    int a, b=0,c;
    printf("Enter a number");
    scanf("%d", &a);
    c=a;
    while (a != 0)
    {
        
        
        
        a = a / 10;
        b+=1;
    }

    printf("\nThe no digits in %d are : %d",c,b);
}