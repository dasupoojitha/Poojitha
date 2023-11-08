/*C program to print Integer data types. 

The integer datatype in C is used to store the integer numbers(An integer type variable can store zero, positive, and negative values without any decimal).Octal values, hexadecimal values, and decimal values can be stored in int data type in
In C language, the integer data type is represented by the 'int' keyword, and it can be both signed or unsigned. By default, the value assigned to an integer variable is considered positive if it is unsigned.

"integer" is a fundamental variable type built into the compiler and used to define numeric variables holding whole numbers. this is capable of holding 16 bits of data.
 
Range: -2,147,483,648 to 2,147,483,647 
size: 4 bytes
format specifier: %d

syntax of integer:

We use int keyword to declare the integer variable:

int var_name;

The integer data type can also be used as

unsigned int: Unsigned int data type in C is used to store the data values from zero to positive numbers but it can’t store negative values like signed int.
short int: It is lesser in size than the int by 2 bytes so can only store values from -32,768 to 32,767.
long int: Larger version of the int datatype so can store values greater than int.
unsigned short int: Similar in relationship with short int as unsigned int with int.
*/
#include <stdio.h>
 
int main()
{
    // Integer with positive data.
    int a = 7;
 
    // integer with negative data.
    int b = -4;
 
    // u is Used for Unsigned int in C.
    int c = 14U;
 
    // l is used for long int in C.
    long int d = 2147483647L;
 
    printf("Integer value with positive data: %d\n", a);
    printf("Integer value with negative data: %d\n", b);
    printf("Integer value with an unsigned int data: %u\n",c);
    printf("Integer value with an long int data: %ld", d);
 return 0;
}