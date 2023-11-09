/*c program on area and radius of the circle with differencent values.
Suppose a circle has a radius 'r' then the area of circle = πr2 or πd2/4 in square units, where π = 22/7 or 3.14, and d is the diameter. Area of a circle can be calculated by using the formulas: Area = π × r2, where 'r' is the radius.
Area: region, land, quarter, division More Synonyms of area. 2. countable noun. Your area is the part of a town, country, or region where you live. An organization's area is the part of a town, country, or region that it is responsible for.
Radius: The distance from the center to a point on the boundary is called the radius of a circle. It is represented by the letter 'r' or 'R'
Formula:
The area of a circle is pi times the radius squared (A = π r²).
*/
#include <stdio.h>
#define PI 3.14
float a(float a1);
int main()
{
    float a1;
    printf("\n enter the a1:");
    scanf("%f", &a1);
    printf("the a of a1 in %f\n", a(a1));
}
float a(float a1)
{
    // this is the formula of The area of a circle 
    return (PI * a1 * a1);
}
