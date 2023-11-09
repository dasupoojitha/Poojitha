/*c program using assignment operators.
There are different kinds of the operators, such as arithmetic, relational, bitwise, assignment, etc., in the C programming language. The assignment operator is used to assign the value, variable and function to another variable. Let's discuss the various types of the assignment operators such as =, +=, -=, /=, *= and %=.

Simple Assignment Operator (=):
It is the operator used to assign the right side operand or variable to the left side variable.
syntax:
A=B OR A=(A=B)

Plus and Assign Operator (+=):
The operator is used to add the left side operand to the left operand and then assign results to the left operand.
syntax:
A+=B OR A=A+B

Subtract and Assign Operator (-=):
The operator is used to subtract the left operand with the right operand and then assigns the result to the left operand.
syntax:
A-=B OR A=A-B

Multiply and Assign Operator (*=):
The operator is used to multiply the left operand with the right operand and then assign result to the left operand.
syntax:
A*=B

Divide and Assign Operator (/=):
An operator is used between the left and right operands, which divides the first number by the second number to return the result in the left operand.
Syntax:
A /= B;

Modulus and Assign Operator (%=):
An operator used between the left operand and the right operand divides the first number (n1) by the second number (n2) and returns the remainder in the left operand.
Syntax:
A %= B;
*/
#include <stdio.h>
int main()
{
  int a, b;
  printf("enter the value of a:\n");
  scanf("%d", &a);
  printf("enter the value of b:\n");
  scanf("%d", &b);
  printf("a=b is %d\n", a = b);
  printf("a+=b is %d\n", a += b);
  printf("a-=b is %d\n", a -= b);
  printf("a*=b is %d\n", a *= b);
  printf("a/=b is %d\n", a /= b);
  printf("a%=b is %d\n", a %= b);
  printf("~a = %d\n", ~a);
  return 0;
}