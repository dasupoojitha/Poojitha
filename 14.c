/*C Program using size of data type in C
The size of the data types in C is dependent on the size of the architecture, so we cannot define the universal size of the data types. For that, the C language provides the sizeof() operator to check the size of the data types.
The sizeof() function in C is a built-in function that is used to calculate the size (in bytes)that a data type occupies in ​the computer's memory. A computer's memory is a collection of byte-addressable chunks.
It is a compile-time unary operator which can be used to compute the size of its operand. The result of sizeof is of the unsigned integral type which is usually denoted by size_t. sizeof can be applied to any data type, including primitive types such as integer and floating-point types, pointer types, or compound datatypes such as Structure, union, etc.
it simply returns the amount of memory allocated to that data types. 

Syntax:
sizeof(Expression);
where ‘Expression‘ can be a data type or a variable of any type.
*/
#include <stdio.h>
 int main()
{
    int size_of_int = sizeof(int);
    int size_of_char = sizeof(char);
    int size_of_float = sizeof(float);
    int size_of_double = sizeof(double);
 //it will print the size(byte) of data types
    printf("The size of int data type : %d\n", size_of_int);
    printf("The size of char data type : %d\n",size_of_char);
    printf("The size of float data type : %d\n",size_of_float);
    printf("The size of double data type : %d",size_of_double);
return 0;
}