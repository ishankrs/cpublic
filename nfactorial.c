#include "stdio.h"
#include "math.h"
int main(){

float fact=1,j,inp;
float sum=0;

printf(" Enter number to find its factorial series sum ");
scanf("%f",&inp);

for(j=inp;j>=1;j--)

{

    fact=fact*j;
  sum=sum +pow(2,j)/fact;

}

printf("%f",sum);

}





