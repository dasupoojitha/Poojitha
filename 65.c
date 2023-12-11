#include <stdio.h>
int main()
{
int countdown=0;
int n;
printf("enter the value of n:");
scanf("%d",&n);
while (countdown <n) 
{
  printf("Happy new year \n", countdown);
  countdown++;
}
return 0;
}