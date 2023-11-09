/*C program using increment & decrement.
C Operators are symbols that represent operations to be performed on one or more operands. C provides a wide range of operators, which can be classified into different categories based on their functionality. Operators are used for performing operations on variables and values.
Operators that operate or work with a single operand are unary operators. For example:Increment Operator,Decrement.

Increment Operators are the unary operators used to increment or add 1 to the operand value. The Increment operand is denoted by the double plus symbol (++). It has two types, Pre Increment and Post Increment Operators.

Pre-increment Operator
The pre-increment operator is used to increase the original value of the operand by 1 before assigning it to the expression.
syntax:
X = ++A; 

Post increment Operator
The post-increment operator is used to increment the original value of the operand by 1 after assigning it to the expression.

Syntax:
X = A++;  
Decrement Operator
Decrement Operator is the unary operator, which is used to decrease the original value of the operand by 1. The decrement operator is represented as the double minus symbol (--). It has two types, Pre Decrement and Post Decrement operators.

Pre Decrement Operator
The Pre Decrement Operator decreases the operand value by 1 before assigning it to the mathematical expression. In other words, the original value of the operand is first decreases, and then a new value is assigned to the other variable.

Syntax:
B = --A; 
Post decrement Operator
Post decrement operator is used to decrease the original value of the operand by 1 after assigning to the expression.

Syntax:
B = A--;*/
#include <stdio.h>
 int main()
{
    int a = 5;
    int b = 5;
    printf("Pre-Incrementing a = %d\n", ++a);
    printf("Post-Incrementing b = %d\n", b++);
    int c=6;
    int d=7;
    printf("Pre-decrement c = %d\n", --c);
    printf("Post-decrement d = %d", d--);
    return 0;
}
