// c program on area and radius of the circle with differencent values 
#include<stdio.h>
#define PI 3.14
float a(float a1);
int main()
{
    float a1;
    printf("\n enter the a1:");
    scanf("%f",&a1);
    printf("the a of a1 in %f\n",a(a1));
}
float a(float a1)
{
    // this is the formula of radius
 return (PI*a1*a1);
}

