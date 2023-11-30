// c program to print the 7th highest value in the list
#include <stdio.h>
int main()
{
    int i,temp=0;
    int arr[10];
    printf("the array elements are:");
    for(i=0;i<10;i++)
    { 
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        for(int j=i+1;j<10;++j)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }
    printf("the 7th largest value in the array is %d",arr[6]);
    return 0;


}