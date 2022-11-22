#include "stdio.h"
int main(){
    int a,b,sum=0,c ;
    scanf("%d",&a);
    c=a;

    while (a!=0)
    {
        b=a%10;
        sum=(sum)+(b*b*b);/*the remainder variable (b) is cubed and stored in variable sum*/

        a=a/10;

    
    }
     
   
    if (c==sum)
    {
        printf("the number is armstrong");
    }
    else printf("the no isnt armstrong");
} 