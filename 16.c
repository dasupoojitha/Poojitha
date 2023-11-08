/*c program using unary operator.
Unary operators are the operators that perform operations on a single operand to produce a new value.

Types of unary operators are mentioned below:
Unary minus ( – ):The minus operator ( – ) changes the sign of its argument. A positive number becomes negative, and a negative number becomes positive

Increment ( ++ ):The increment operator ( ++ ) is used to increment the value of the variable by 1. The increment can be done in two ways:

prefix increment:
In this method, the operator precedes the operand (e.g., ++a). The value of the operand will be altered before it is used.
postfix increment:
In this method, the operator follows the operand (e.g., a++). The value operand will be altered after it is used.

Decrement ( -- ):The decrement operator ( -- ) is used to decrement the value of the variable by 1. The decrement can be done in two ways:

prefix decrement:
In this method, the operator precedes the operand (e.g., – -a). The value of the operand will be altered before it is used.
postfix decrement
In this method, the operator follows the operand (e.g., a- -). The value of the operand will be altered after it is used.

NOT ( ! ):The logical NOT operator ( ! ) is used to reverse the logical state of its operand. If a condition is true, then the Logical NOT operator will make it false.
*/
#include <stdio.h>
int main()
{
    int positive; // declaring a positive integer
    printf("enter the value of positive:\n");
    scanf("%d", &positive);
// using - sign to make the value of positive integers to negative
    int negative = -positive;
    printf("negative=%d\n", negative);
// C Program using increment operation
    int a = 5;// value of a  is pre increment
    int b = 3;// value of b is post increment
    printf("Pre-Incrementing a = %d\n", ++a);
    printf("Post-Incrementing b = %d\n", b++);
// C Program using decrement operation
    int c = 6;// value of c is pre decrement
    int d = 6;// value of d is pre decrement
    printf("Pre-Decrementing c = %d\n", --c);
    printf("Post-Decrementing d = %d\n", d--);
// C program using NOT operator
    int e=11,f=12;
    if (!(e > f))
        printf("f is greater than e\n");
    else
        printf("e is greater than f");
return 0;
}