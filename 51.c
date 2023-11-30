// c program to using simple if-else condition to check wheather the give number is even or odd. 
#include <stdio.h>
int main()
{
    int a = 0;
    printf("enter the value of a:");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("the even number");
    }
    else
    {
        printf("the odd number");
    }
    return 0;
}                                                                                                    