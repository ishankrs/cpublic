#include <stdio.h>
int main()
{ int i = 0;
    int a[5];
    printf("Enter some integers: ");
   
    while (i < 5)
    {
        scanf("%d", &a[i]);
        i++;
    }
    printf("integers are: \n");
    int j=0;
    while ( j < 5)
    {
        printf("%d\n", a[j]);
        j++;
    }
    return 0;
}
