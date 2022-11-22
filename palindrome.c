#include "stdio.h"
int main(){
    int a,b,sum=0,c ;
    scanf("%d",&a);
    c=a;

    while (a!=0)
    {
        b=a%10;
        sum=(sum*10)+b;

        a=a/10;

    
    }
     
   
    if (c==sum)
    {
        printf("the number is palindrome");
    }
    else printf("the no isnt palindrome");
} 