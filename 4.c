/*write a program toswapping of two numbers
*/
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers:\n");
    scanf("%d %d",&a,&b);
    printf("before swapping of two numbers a is %d and b is %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping of two number a is %d and b is %d\n",a,b);
    return 0;

}