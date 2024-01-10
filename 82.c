#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("enter the value of b:");
    c = a + b;
    printf("%d=%d+%d", c, a, b);
}