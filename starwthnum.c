#include <stdio.h>  
  
int main()  
{  
    int n,i=1,j=1;  
    printf("Enter the number ");  
    scanf("%d",&n);  
    while(i<=n)  
    {  
        while(j<=i)  
        {  
            printf("%d ",j);  
            j++;
        }  
        printf("\n");  
        i++;
    }  
    return 0;  
}  