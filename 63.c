#include <stdio.h>
int main()
{
    int a,i=0;
    printf("enter the value of a:");
    scanf("%d",&a);
    while (i < 50)
    {
        printf("%d\n", i);
        i = i + 10;
    }
    return 0;
}