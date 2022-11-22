#include "stdio.h"
int main(){
int hcf , lcm ,n1 ,n2, x;

printf("Enter two numbers for HCF and LCM");
scanf("%d%d",&n1,&n2);

for(x=1; x <= n1 && x <= n2; ++x)
    {
        
        if(n1%x==0 && n2%x==0)
            hcf = x;
    }
printf("HCF of %d and %d is :%d",n1,n2,hcf);
lcm=(n1*n2)/hcf;
printf("\nLCM of %d and %d is :%d",n1,n2,lcm);




}