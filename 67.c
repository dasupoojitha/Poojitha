#include <stdio.h>
int main()
{
int i;
int n;
printf("enter the value of n:");
scanf("%d",&n);
i=n;
while (i>=0) // while i>0 or i>1 consider that the loop number such be reversed
{
  printf("%d\n",i);
  i--;
}
}