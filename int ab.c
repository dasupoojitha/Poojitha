#include <stdio.h>
int main()
{
    float a,b;
    printf("enter the value of a:\n");
    scanf("%d",&a);
    printf("enter the value of b:\n");
    scanf("%d",&b);
    printf("a<b+ a>b is %d \n",((a<b)+(a>b)));
    return 0;
}