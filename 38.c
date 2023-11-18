/*Basic program to print elements of 2d Array in C.
 when accessing the element from a 2D array using arr[first][second] , the first index can be thought of as the desired row, and the second index is used for the desired column. Just like 1D arrays, 2D arrays are indexed starting at 0 .
*/
#include <stdio.h> 
int main() 
{ 
   int arr[2][2] = {10,11,12,13}; 
   int i,j; 
   for(i = 0; i<2; i++) 
   { 
     printf("\n"); 
     for(j = 0; j<2; j++) 
     { 
       printf(" %d \t", arr[i][j]); 
     } 
   } 
return 0; 
} 