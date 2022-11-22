#include "stdio.h"

int main(){
int i,terms,sum=0;
printf("\n Upto how many places do you want the squares:");
scanf("%d",&terms);
printf("The squares are:");
for ( i = 0; i < terms; i++)
{
    printf("  %d  ",i*i);
    sum=sum+(i*i);
}

printf("\n The sum of  first %d  natural square numbers is:%d",terms,sum);





}