//pass 2d array elements.
#include <stdio.h>
int numbers(int num[2][2]);
int main()
{
  int num[2][2];
  printf("enter the numbers:\n");
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
      scanf("%d",&num[i][j]);
    }
  }
  numbers(num);
}
int numbers(int num[2][2])
{
  printf("displaying:\n");
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
  {
    printf("%d\n",num[i][j]);
  }
}
}