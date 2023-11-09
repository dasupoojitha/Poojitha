/*c program to print the relational operators.
Relational Operators:Relational operators are used to compare two values in C language. It checks the relationship between two values. If relation is true, it returns 1. However, if the relation is false, it returns 0.
Operators	Operator Name
==	Equal to: Represented as ‘==’, the equal to operator checks whether the two given operands are equal or not. If so, it returns true. Otherwise, it returns false. For example, 5==5 will return true.
>	Greater than: Represented as ‘>’, the greater than operator checks whether the first operand is greater than the second operand or not. If so, it returns true. Otherwise, it returns false. For example, 6>5 will return true.
<	Less than: Represented as ‘<‘, the less than operator checks whether the first operand is lesser than the second operand. If so, it returns true. Otherwise, it returns false. For example, 6<5 will return false.
!=	Not equal to: Represented as ‘!=’, the not equal to operator checks whether the two given operands are equal or not. If not, it returns true. Otherwise, it returns false. It is the exact boolean complement of the ‘==’ operator. For example, 5!=5 will return false.
>=	Greater than or equal to:  Represented as ‘>=’, the greater than or equal to operator checks whether the first operand is greater than or equal to the second operand. If so, it returns true else it returns false. For example, 5>=5 will return true.
<=	Less than or equal to:  Represented as ‘<=’, the less than or equal to operator checks whether the first operand is less than or equal to the second operand. If so, it returns true else false. For example, 5<=5 will also return true.
*/
#include <stdio.h>
int main()
{
    int a=4;//declaring the value of a
    int b=2;//declaring the value of b
    printf("a>b=%d\n",a>b);
    printf("a<b=%d\n",a<b);
    printf("a>=b=%d\n",a>=b);
    printf("a<=b=%d\n",a<=b);
    printf("a==b=%d\n",a==b);
    printf("a!=b=%d\n",a!=b);

     return 0;
}

