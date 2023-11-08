/*C program to print Char data types.

Character data type allows its variable to store only a single character. The size of the character is 1 byte. It is the most basic data type in C. It stores a single character and requires a single byte of memory in almost all compilers.
It stores a single character and requires a single byte of memory in almost all compilers.

Now character datatype can be divided into 2 types:

signed char
unsigned char

Range: (-128 to 127) or (0 to 255)
Size: 1 byte
Format Specifier: %c

Syntax of char:
The char keyword is used to declare the variable of character type:

char var_name;
*/
#include <stdio.h>
 
int main()
{
    char b = 'a';
    char c;
 
    printf("Value of b: %c\n", b);
 
    b++;
    printf("Value of b after increment is: %c\n", b);
 
    // c is assigned ASCII values
    // which corresponds to the
    // character 'c'
    // a-->97 b-->98 c-->99
    // here c will be printed
    c = 99;
 
    printf("Value of c: %c", c);
 
    return 0;
}