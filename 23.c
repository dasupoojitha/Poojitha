/*c program on the volume of the cylinder using radius and height with user inputs.
The volume of a cylinder is the density of the cylinder which signifies the amount of material it can carry or how much amount of any material can be immersed in it. Cylinder's volume is given by the formula, πr2h, where r is the radius of the circular base and h is the height of the cylinder.
 the volume (V) of a right circular cylinder, using the above formula (V = A × h), is,

V = πr2h

Here,
'r' is the radius of the base (circle) of the cylinder
'h' is the height of the cylinder
π is a constant whose value is either 22/7 (or) 3.142.
*/
#include <stdio.h>
#define PI 3.14
float main ()
{
    float volume,radius,height;
    printf("enter the value of radius:\n");
    scanf("%f",&radius);
    printf("enter the value of height:\n");
    scanf("%f",&height);
volume=PI*radius*radius*height;
printf("the volume of the cylinder is %f:\n",volume);
return 0;
}


