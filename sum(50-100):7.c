#include "stdio.h"
int main(){

    int a , b,sum=0;


    for (a = 50; a <= 100; a++) {
      if (a % 7 == 0) {
         b++;
         sum=sum+b;
      }
  }
    
printf("%d",b);
printf("\n%d",sum);

}