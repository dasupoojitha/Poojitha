/*c program to print sum of int and float values.

The integer datatype in C is used to store the integer numbers(An integer type variable can store zero, positive, and negative values without any decimal).Octal values, hexadecimal values, and decimal values can be stored in int data type in
In C language, the integer data type is represented by the 'int' keyword, and it can be both signed or unsigned. By default, the value assigned to an integer variable is considered positive if it is unsigned.
"integer" is a fundamental variable type built into the compiler and used to define numeric variables holding whole numbers. this is capable of holding 16 bits of data.
 
Range: -2,147,483,648 to 2,147,483,647 
size: 4 bytes
format specifier: %d

C programming float data type is used to store floating-point values. Float in C is used to store decimal and exponential values. It is used to store decimal numbers (numbers with floating point values) with single precision.
the float data type in C is used to store floating-point numbers, which are numbers with a decimal point. Floats have limited precision, but they are useful for many scientific and mathematical applications. 
Range: 1.2E-38 to 3.4E+38
Size: 4 bytes
Format Specifier: %f
*/
#include <stdio.h>
int main()
{
    int a;
    float f,sum;

    a = 5;
    f =8.5;
    sum = a + f;
    printf("This is my first program");
    printf(" this is the value of a %d \n", a);
    printf(" this is the value of f %f \n", f);
    printf("the sum a and f is %f \n", a + f);
    return 0;
}    