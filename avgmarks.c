#include "stdio.h"

int main()
{
    int marks[5], i=0, n = 5, sum = 0, average;

    while ( i < n )
    {
        printf("Enter Marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
        i++;
    }
    average = sum / n;
    printf("Average  = %d", average);
    return 0;
}
