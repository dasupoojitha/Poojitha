#include <stdio.h>
void sum()
{
    sum();
    sum();
    sum();
}
void main()
{
    static int x=1;
    x=x+5;
    printf("%d",x);
}