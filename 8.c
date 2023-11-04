// C program to print Integer data types out ofthe range.
#include <stdio.h>
 
int main()
{
    // Integer with positive data.
    int a = 214748368;
 
    // integer with negative data.
    int b = -214748369;
 
    // u is Used for Unsigned int in C.
    int c = 4294967295u  ;
 
    // l is used for long int in C.
    long int d = 2147483648l;
 
    printf("Integer value with positive data: %d\n", a);
    printf("Integer value with negative data: %d\n", b);
    printf("Integer value with an unsigned int data: %u\n",c);
    printf("Integer value with an long int data: %ld", d);
 return 0;
}