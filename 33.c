/*Calculate sum of all array elements and average of the sum.
average=sum of observation/total no.of elements
we need to calculate the sum of all the elements of an array. This can be solved by looping through the array and add the value of the element in each iteration to variable sum.
*/
#include <stdio.h>
int main()
{
    int a[100],i,sum=0;
    int average;
    printf("enter the elements:\n");
    for (i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("the array elements are:");
    for (i=0;i<5;i++)
    printf("%d\n ",a[i]);
    for(i=0; i<5; i++)
    sum+=a[i];
    printf("sum of array is %d\n",sum);
    average=sum/5;
    printf("%f",average);
    return 0;
}