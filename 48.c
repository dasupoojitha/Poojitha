// c program to print the no.of rows and columns to print matrix in form and count the no.of even and odd numbers.
#include <stdio.h>
int main()
    {
 
    	int array[10][10];
    	int i, j, m, n, even = 0, odd = 0;
 
    	printf("Enter the rows and columns of the matrix: \n");
    	scanf("%d %d", &m, &n);
 
    	printf("Enter the elements of the matrix: \n");
    	for (i = 0; i < m; ++i) 
        {
                for (j = 0; j < n; ++j)
                {
                     scanf("%d", &array[i][j]);
                     if ((array[i][j] % 2) == 0)
                     {
                         ++even;
                     }
                     else
                         ++odd;
                 }
 
    	}
 
    	printf("The given matrix is: \n");
    	for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j) 
            {
                printf(" %d", array[i][j]);
            }
            printf("\n");
        }
 
        printf("\n The frequency of occurrence of odd number  = %d \n", odd);
        printf("The frequency of occurrence of even number = %d\n", even);
    return 0;
    }