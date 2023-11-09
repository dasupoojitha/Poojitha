/*c program using bitwise operators
C Operators are symbols that represent operations to be performed on one or more operands. C provides a wide range of operators, which can be classified into different categories based on their functionality. Operators are used for performing operations on variables and values
The Bitwise operators are used to perform bit-level operations on the operands. The operators are first converted to bit-level and then the calculation is performed on the operands. Mathematical operations such as addition, subtraction, multiplication, etc. can be performed at the bit level for faster processing. For example, the bitwise AND operator represented as ‘&’ in C takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1(True).The bitwise operators are the operators used to perform the operations on the data at the bit-level. When we perform the bitwise operations, then it is also known as bit-level programming. It consists of two digits, either 0 or 1. It is mainly used in numerical computations to make the calculations faster.

Bitwise AND operator: Bitwise AND operator is denoted by the single ampersand sign (&). Two integer operands are written on both sides of the (&) operator. If the corresponding bits of both the operands are 1, then the output of the bitwise AND operation is 1; otherwise, the output would be 0.

Bitwise OR operator: The bitwise OR operator is represented by a single vertical sign (|). Two integer operands are written on both sides of the (|) symbol. If the bit value of any of the operand is 1, then the output would be 1, otherwise 0.

Bitwise exclusive OR operator: Bitwise exclusive OR operator is denoted by (^) symbol. Two operands are written on both sides of the exclusive OR operator. If the corresponding bit of any of the operand is 1 then the output would be 1, otherwise 0.

Bitwise complement operator: The bitwise complement operator is also known as one's complement operator. It is represented by the symbol tilde (~). It takes only one operand or variable and performs complement operation on an operand. When we apply the complement operation on any bits, then 0 becomes 1 and 1 becomes 0

Bitwise shift operators: Two types of bitwise shift operators exist in C programming. The bitwise shift operators will shift the bits either on the left-side or right-side. Therefore, we can say that the bitwise shift operator is divided into two categories:

Left-shift operator: It is an operator that shifts the number of bits to the left-side.
Syntax of the left-shift operator is given below:
Operand << n 

Right-shift operator: It is an operator that shifts the number of bits to the right side.
Syntax of the right-shift operator is given below:
Operand >> n
*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the a value:\n");
    scanf("%d", &a);
    printf("enter the value:\n");
    scanf("%d", &b);
    printf("a&b is %d\n", a & b);
    printf("a<<b is %d\n", a << b);
    printf("a>>b is %d\n", a >> b);
    printf("a|b is %d\n", a | b);
    printf("a^b is %d\n", a ^ b);
return 0;
}