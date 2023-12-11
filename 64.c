#include <stdio.h>
int main()
{
int countdown=0;
int n;
printf("enter the value of n:");
scanf("%d",&n);
while (countdown <n) 
{
  printf("%d\n", countdown);
  countdown++;
}

printf("Happy New Year!!\n");
}