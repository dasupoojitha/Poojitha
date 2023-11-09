/*c program to print relational operators.
Relational Operators: Relational operators are used to compare two values in C language. It checks the relationship between two values. If relation is true, it returns 1. However, if the relation is false, it returns 0.
==: Checks if the values of two operands are equal or not. If yes, then the condition becomes true.	(A == B) is not true.
!=: Checks if the values of two operands are equal or not. If the values are not equal, then the condition becomes true.	(A != B) is true.
>:	Checks if the value of left operand is greater than the value of right operand. If yes, then the condition becomes true.	(A > B) is not true.
<:	Checks if the value of left operand is less than the value of right operand. If yes, then the condition becomes true.	(A < B) is true.
>=:	Checks if the value of left operand is greater than or equal to the value of right operand. If yes, then the condition becomes true.	(A >= B) is not true.
<=:	Checks if the value of left operand is less than or equal to the value of right operand. If yes, then the condition becomes true.	(A <= B) is true.
*/

#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a:\n");
    scanf("%d",&a);
    printf("enter the value of b:\n");
    scanf("%d",&b);
    printf("a>b%d\n",a>b);
    printf("a<b=%d\n",a<b);
    printf("a>=b=%d\n",a>=b);
    printf("a<=b=%d\n",a<=b);
    printf("a==b=%d\n",a==b);
    printf("a!=b=%d\n",a!=b);
    return 0;
}
