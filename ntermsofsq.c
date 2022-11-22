#include "stdio.h"

#include "math.h"
int main()

{

    int i, i2, n, sum = 0;

    printf("which digit you want to make sequencial sum for");
    scanf("%d", &i);
    printf("Upto which place you want the sum for (the series)");
    scanf("%d",&n);
   
    
     i2 = pow(10, n);
    i2= i2-1;
    i2=i2*10;
    i2=i2 -(9*n);
    sum=i*i2;
    sum=sum/81;
    /* sum=i[{10*(10^n-1)} - 9n]/81 */
    printf("the sum is %d",sum);



   


}