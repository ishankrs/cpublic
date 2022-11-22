#include "stdio.h"
int main(){
    int a , b ,c=0;


printf("give an number as input\n");
scanf("\n%d",&a);
for (b = 1; b <= a; b++) {
      if (a % b == 0) {
         c++;
      }
  }

  if (c == 2) {
        printf(" It is a Prime number");
  }
  else {
         printf(" It is not a Prime number");
  } 
  return 0;    
}

