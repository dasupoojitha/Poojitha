// C program to print Integer data types.
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