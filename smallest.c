#include "stdio.h"
int main()
{
    int a[5], i=0, j = 0, k,x ,y;
    printf("enter 5 numbers");
    while (i < 5)
    {
        scanf("%d", &a[i]);
        i++;
    }
    
    while ( j < 5 )
    {
        a[j]= x;
        a[j+1]=y;

        if (x <= y)
        {
            x = k;
        }
        else
        {
            y = k;
        }
        j++;


    }
    printf("%d", k);
}

/* i wrote this code to find the biggest number in an array

algo - take some input ,
        compare the values from input (stored in array linearly ).
        in each comparison store the bigger value into a variable(k),
        now compare the next two variable and store the value bigger value to the variable (k) 



*/