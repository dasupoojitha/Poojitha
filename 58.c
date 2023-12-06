//c program using while loop to print the n number of odd numbers.
#include <stdio.h>
int main()
{
    int number;
    int n;
    number=1;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    printf("odd number from 1 to %d:\n",n);
    while (number <= n)
    {
        if (number % 2 !=0)
        printf("%d ", number);
        number++;
    }
    return 0;
}