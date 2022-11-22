#include "stdio.h"
int main()
{
    int a, b=0,c,d,e;
    printf("Enter a number");
    scanf("%d", &a);
    c=a;
    while 
     (a != 0)
    {
        
        d=a%10;
        
        a = a / 10;
       
        break;
    
        
    }

    while (a!=0)
    {
        e=a%10;
        
        a=a/10;

    
    }
    
    

    printf("\nThe First and Last digits in %d are : %d and %d",c,e,d);
}