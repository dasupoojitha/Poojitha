#include <stdio.h>
int main()
{
    int n,i=1,fact=1;
    printf("enter n value:");
    scanf("%d",&n);
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf(" the factorial of %d! = %d",n,fact);
}