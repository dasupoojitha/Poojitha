// c program used to print the array elements 
#include<stdio.h>
int main()
{
    int arr[3];
    int i, j;
    printf("Enter array element:\n");
    for(i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);    //Run time array initialization
    }
    printf("Array elements are :\n ");
    for(j = 0; j < 3; j++)
    {
        printf("%d\n", arr[j]);
    }
}