#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    while (a>=b)
    {
    printf("a is grater then b");
    }
    if(a==b)
    {
        printf("both a and b values are equal");
    }
    else
    {
        printf("b is greater then a");
    } 
    return 0;
}