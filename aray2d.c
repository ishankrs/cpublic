#include "stdio.h"  
void main ()    
{    
    int arr[5][4],i,j;     
    for (i=0;i<5;i++)    
    {    
        for (j=0;j<4;j++)    
        {    
            printf("Enter a[%d][%d]: ",i,j);                
            scanf("%d",&arr[i][j]);    
        }    
    }    
    printf("\n  the elements ....\n");     
    for(i=0;i<5;i++)    
    {    
        printf("\n");    
        for (j=0;j<4;j++)    
        {    
            printf("%d\t",arr[i][j]);    
        }    
    }    
}    
