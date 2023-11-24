// sorting of numbers using 2d arrays
#include <stdio.h>
int main()
{
  int n,m;
  printf("enter the array elements of n and m: \n");
  scanf("%d %d",&n,&m);//instering the values 
  int a[n][m];
  printf("the array elements are:\n");
   for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(a[i][j]>a[i+1][j])
      {
        int temp =a[i][j];
        a[i][j]=a[i+1][j];
        a[i+1][j]=temp;
      }
    }
  }
  printf("the numbers in sorted array are:\n");
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    printf("%d ",a[i][j]);
    printf("\n");
  }
}