#include <stdio.h>
int main()
{
  int a,b;
  printf("enter the value of a:\n");
  scanf("%d",&a);
  printf("enter the value of b:\n");
  scanf("%d",&b);
  printf("a=b is %d\n",a=b);
  printf("a+=b is %d\n",a+=b);
  printf("a-=b is %d\n",a-=b);
  printf("a*=b is %d\n",a*=b);
  printf("a/=b is %d\n",a/=b);                                       
  printf("a%=b is %d\n",a%=b);
  printf("~a = %d\n", a = ~a);
return 0;
}