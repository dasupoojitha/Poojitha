// C program to print Integer data types.
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