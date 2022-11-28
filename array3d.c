#include "stdio.h"  
int main ()    
{    int m,n;
    scanf("%d%d",&n,&m);

    int arr[n][m],i,j;     
    for (i=0;i<n;i++)    
    {    
        for (j=0;j<m;j++)    
        {    
            printf("Enter a[%d][%d]: ",i,j);                
            scanf("%d",&arr[i][j]);    
        }    
    }    
    printf("\n  the elements ....\n");     
    for(i=0;i<n;i++)    
    {    
        printf("\n");    
        for (j=0;j<m;j++)    
        {    
            printf("%d\t",arr[i][j]);    
        }    
    }    
}    
