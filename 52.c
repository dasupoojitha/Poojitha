// c program using if elseif else to check the first,second and failof students.
#include <stdio.h>
int main()
{
    int a;
    printf("enter the value of a: ");
    scanf("%d",&a);
    if(a>=95)
    {
        printf("first rank",a);
    }
    else if(a>=65)
    {
        printf("second rank",a);
    }
    else
    {
     printf("fail",a);
    }
    return 0;
}