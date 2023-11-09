/*c program using ternary or conditional.
The conditional operator is also known as a ternary operator. The conditional statements are the decision-making statements which depends upon the output of the expression. It is represented by two symbols, i.e., '?' and ':'.
As conditional operator works on three operands, so it is also known as the ternary operator.
The behavior of the conditional operator is similar to the 'if-else' statement as 'if-else' statement is also a decision-making statement.

In the above syntax, the expression1 is a Boolean condition that can be either true or false value.
If the expression1 results into a true value, then the expression2 will execute.
The expression2 is said to be true only when it returns a non-zero value.
If the expression1 returns false value then the expression3 will execute.
The expression3 is said to be false only when it returns zero value.

syntax:
Expression1? expression2: expression3;
*/
#include <stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    (age>=18)?(printf("eligible for vote")):printf(("not eligible for vote"));
return 0;
}