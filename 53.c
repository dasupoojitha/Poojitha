// c program using if elseif else to check the first,second,thrid,fourth and fail percentage of students.
#include <stdio.h>
int main()
{
    int marks;
    printf("enter the marks:");
    scanf("%d",&marks);
    if(marks>=85 && marks<=100)
    {
        printf("first rank");
    }
    else if(marks>=65 && marks<=85)
    {
        printf("second rank");
    }
    else if(marks>=40 && marks<=65)
    {
        printf("third rank");
    }
    else if(marks>=35 && marks<=40)
    {
        printf("fourth rank");
    }
    else
    {
        printf("fail");
    }
    return 0;
}