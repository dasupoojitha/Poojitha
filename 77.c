#include <stdio.h>
#include <stdlib.h>

int main()
{
  
    int i,j,k,n;
    printf("Enter the upper limit : \n");
    scanf("%d", &i);
    printf("Enter the lower limit : \n");
    scanf("%d", &j);
    printf("Five random numbers within %d and %d are :\n",i,j);
    for (k = 1; k <=2; k++)
    {
        n = (rand() % (i - j + 1))+j;
        printf("Number %d : %d\n",k,n);
    }
    return 0;
}