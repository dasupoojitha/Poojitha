/*c program to print integer,character and float values and sum of both int and float values.
The integer datatype in C is used to store the integer numbers(An integer type variable can store zero, positive, and negative values without any decimal).Octal values, hexadecimal values, and decimal values can be stored in int data type in
In C language, the integer data type is represented by the 'int' keyword, and it can be both signed or unsigned. By default, the value assigned to an integer variable is considered positive if it is unsigned.

"integer" is a fundamental variable type built into the compiler and used to define numeric variables holding whole numbers. this is capable of holding 16 bits of data.Range: -2,147,483,648 to 2,147,483,647 
size: 4 bytes
format specifier: %d
syntax of integer: int var_name;

Character data type allows its variable to store only a single character. The size of the character is 1 byte. It is the most basic data type in C. It stores a single character and requires a single byte of memory in almost all compilers.
It stores a single character and requires a single byte of memory in almost all compilers.

Now character datatype can be divided into 2 types:
signed char
unsigned char
Range: (-128 to 127) or (0 to 255)
Size: 1 byte
Format Specifier: %c
Syntax of char: char var_name;

the float data type in C is used to store floating-point numbers, which are numbers with a decimal point. Floats have limited precision, but they are useful for many scientific and mathematical applications. 
Range: 1.2E-38 to 3.4E+38
Size: 4 bytes
Format Specifier: %f
syntax:
float var_name;

*/
#include <stdio.h>
int main()
{
    int a = 5;
    float f = 8.5;
    char c = 'p';
    int d = 5;
    
    printf("This is my first program");
    printf(" this is the value of a %d \n", a);
    printf(" this is the value of f %f \n", f);
    printf(" this is the value of c %c \n", c);
    printf("the sum a and f is %d \n", a + f);
    return 0;
}    
