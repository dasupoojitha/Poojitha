//sum of all 2d array elements.
#include <stdio.h>
int main()
{
  int row,col,m1[10][10],m2[10][10],sum[10][10];
  printf("\nEnter the number of rows: ");
  scanf("%d",&row);
  printf("\nEnter the number of column: ");
  scanf("%d",&col);
  printf("\nEnter the elements of first 1st matrix: ");
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      scanf("%d",m1[i][j]);
    }
  }
  printf("Enter the elements of second 2nd matrix: ");
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      scanf("%d",m2[i][j]);
    }
  }
  scanf("Output: ");
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      sum[i][j]=m1[i][j]+m2[i][j];
      printf("sum[i][j]"," ");
    }
  }
  return 0;
}
