/* C Program to demonstrate use of Floating types
C programming float data type is used to store floating-point values. Float in C is used to store decimal and exponential values. It is used to store decimal numbers (numbers with floating point values) with single precision.
the float data type in C is used to store floating-point numbers, which are numbers with a decimal point. Floats have limited precision, but they are useful for many scientific and mathematical applications. 
Range: 1.2E-38 to 3.4E+38
Size: 4 bytes
Format Specifier: %f

Syntax of float:
The float keyword is used to declare the variable as a floating point:

float var_name;
*/
#include <stdio.h>
 
int main()
{
    float a = 9.0;
    float b = 2.5;
 
    // 2x10^-4
    float c = 3.2E-4;
    printf("%f\n", a);
    printf("%f\n", b);
    printf("%f", c);
 
    return 0;
}