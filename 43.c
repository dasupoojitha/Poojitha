//instering values into the array using hard coded inputs.
#include <stdio.h>

  int main()
 {

    int a[2][3] = { { 1, 3, 2 }, { 6, 7, 8 } };
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("\n  %d ",a[i][j]);
        }
           
        
    }
   printf("\nprinting the elements of a 2D array: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
            if(j==2)
			printf("\n");
		}
	}
	return 0;
}