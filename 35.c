/*swapping of two arrays in c program.
To swap elements of two arrays you have to swap each pair of elemenets separatly. And you have to supply the number of elements in the arrays. Otherwise the arrays need to have a sentinel value. Here is a demonstrative program that shows how the function swap can be defined
a=a+b;
b=a-b;
a=a-b;
*/
#include <stdio.h>
int main()
{
    int n,i,a[10],b[10];
    printf("enter the array of N :\n");
    scanf("%d",&n);
    printf("first array :\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter second array element:\n");
    for(i = 0; i < n; i ++)
    {
        scanf("%d", &b[i]);
    }
    //Swapping two Arrays
    for(i = 0; i < n; i++)
    {
        a[i] = a[i] + b[i];
        b[i] = a[i] - b[i];
       a[i] = a[i] - b[i];
    }
    printf("\n array after swapping %d elements\n",n);
    for(i = 0; i < n; i ++)
    {
        printf(" %d ",a[i]);
    }
    printf("array after Swapping %d elements\n",n);
    for(i = 0; i < n; i ++){
        printf(" %d ",b[i]);
    }
    return 0;
}
