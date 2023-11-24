// c program to print array size and largest array elements.
#include<stdio.h>
int main()
{
  int a[10], Size, i, Largest, Position;
  
  printf("\nEnter the size of an array \n");
  scanf("%d",&Size);
  
  printf("\nEnter elements of an array   %d: \n", Size);
  for(i=0; i<Size; i++)
   {
     scanf("%d",&a[i]);
   }   
  
  Largest = a[0];
  for(i=1; i<Size; i++)
   {
    if(Largest<a[i])
     {
       Largest=a[i];
       Position = i;
     }   
   }
  
  printf("\nLargest element in an Array = %d", Largest);
  printf("\nIndex position of the Largest element = %d", Position);
  
  return 0;
}