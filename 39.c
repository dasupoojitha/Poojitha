/*Inserting values in 2D array
In 2D array, if a user want to enter the values/elements then two for loops are used.

First for loop represents the number of rows.
Second for loop represents the number of columns.
*/

#include<stdio.h>
int main()
{
	int arr[3][3];                    
	int i,j;
	printf("enter the elements: \n");  
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("elements at [%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nprinting the elements of a 2D array: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
            if(j==2)
			printf("\n");
		}
	}
	return 0;
}