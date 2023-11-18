
/*Updating the 2D array
We can update the elements of 2D array either by specifying the element to be replaced or by specifying the position where replacment has to be done.
For updating the array we require,

Elements of an array
Element or position, where it has to be inserted
The value to be inserted.
*/
#include <stdio.h>
int main()
{
    int arr[3][3]; 
	int i,j;                                               
	int num;
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
	printf("\n enter the location in a matrix where you want to update value: ");
	scanf("%d %d",&i,&j);   
	printf("\nenter the value to be replaced: ");
	scanf("%d",&num);
	arr[i][j]=num;                    
	printf("\narray after updating: \n");
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