# include <stdio.h>
int main()
{
    int a,b;
    printf("enter the value a:\n");
    scanf("%d",&a);
    printf("enter the value b:\n");
    scanf("%d",&b);
    printf("a>=b || a<=b %d\n",((a>=b) || (a<=b)));
    printf("a>=b && a<=b %d\n",((a>=b) && (a<=b)));
    printf("a>=b != a<=b %d\n",((a>=b) != (a<=b)));
    return 0;
}    