/*c program using integer and char ans sum of int and char.

The integer datatype in C is used to store the integer numbers(An integer type variable can store zero, positive, and negative values without any decimal).Octal values, hexadecimal values, and decimal values can be stored in int data type in
In C language, the integer data type is represented by the 'int' keyword, and it can be both signed or unsigned. By default, the value assigned to an integer variable is considered positive if it is unsigned.

"integer" is a fundamental variable type built into the compiler and used to define numeric variables holding whole numbers. this is capable of holding 16 bits of data.
 
Range: -2,147,483,648 to 2,147,483,647 
size: 4 bytes
format specifier: %d

Character data type allows its variable to store only a single character. The size of the character is 1 byte. It is the most basic data type in C. It stores a single character and requires a single byte of memory in almost all compilers.
It stores a single character and requires a single byte of memory in almost all compilers.
Now character datatype can be divided into 2 types:
signed char
unsigned char

Range: (-128 to 127) or (0 to 255)
Size: 1 byte
Format Specifier: %c
*/
#include <stdio.h>
int main()
{
    int a;//declaring an integer value 
    char c, sum;// declaring  an char value c
    a=5;//definining the value a=5
    c='p';// defining c=p
    sum = a + c;// declaring  an char value c
    printf(" this is the value of a %d \n", a);
    printf(" this is the value of c %c \n", c);
    printf("the sum a and c is %c \n", a + c);
    return 0;
}    