// C program on perimeter of the rectangle
#include <stdio.h>

int perimeter(int l,int b);
int main()
{
    int l;
    printf("enter the  l:\n");
    scanf("%d",&l);
    int b;
    printf("enter the  b:\n");
    scanf("%d",&b);
    printf("perimeter of a rectangle in %d\n",(perimeter(l,b)));
}
int perimeter(int l,int b)
{
    return (2*(l+b));
}