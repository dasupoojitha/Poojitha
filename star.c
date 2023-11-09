/*c program to print the square star pattern.
print square star(*) pattern series of N rows. C program to print rectangle star(*) pattern in C of N rows and M columns. Logic to print square or rectangle star pattern of N rows in C programming.

Step by step descriptive logic to print the square number pattern:

Input number of rows from user. Store it in some variable say N.
To iterate through rows, run an outer loop from 1 to N. The loop structure should be similar to for(i=1; i<=N; i++).
To iterate through columns, run an inner loop from 1 to N. Define a loop inside above loop with structure for(j=1; j<=N; j++).
Inside inner loop print *.
After printing all columns of a row move to next line i.e. print a new line.
*/
#include <stdio.h>  
 int main()  
{  
    int rows,j;  
    printf("Enter the number of rows:");  
    scanf("%d",&rows);  
    for(int i=0;i<rows;i++)  
    {  
        for(int j=0;j<rows;j++)  
        {  
            printf("*");  
        }  
        printf("\n");  
    }  
      
    return 0;  
} 
 