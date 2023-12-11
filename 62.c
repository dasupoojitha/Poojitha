
#include <stdio.h>
int main()
{
    int a=0, num;
    printf("enter the value num:");
    scanf("%d", &num);
    while (a <= num)
    {
        printf("%d\n",a);
        a++;
    }
    return 0;
}