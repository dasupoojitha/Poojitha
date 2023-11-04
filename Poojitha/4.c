//finding the area  and radius of the circle with float values
#include<stdio.h>
#define PI 3.14
float area(float r);
int main()
{
    float r;
    printf("\n enter the radius:");
    scanf("%f",&r);
    printf("the area of circle in %f\n",area(r));
    // this is the formula of radius
}
float area(float r)
{
 return (PI*r*r);
}

