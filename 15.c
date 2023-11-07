#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the a value:\n");
    scanf("%d",&a);
    printf("enter the value:\n");
    scanf("%d",&b);
    printf("a&b is %d\n",a&b);
    printf("a<<b is %d\n",a<<b);
    printf("a>>b is %d\n",a>>b);
    printf("a|b is %d\n",a|b);
    printf("a^b is %d\n",a^b);
    return 0;
}