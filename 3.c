/*c program on relational and logical
Relational Operators:Relational operators are used to compare two values in C language.
 It checks the relationship between two values. If relation is true, it returns 1. However, if the relation is false, it returns 0.
Operators	Operator Name
==	Equal to: Represented as ‘==’, the equal to operator checks whether the two given operands are equal or not. If so, it returns true. Otherwise, it returns false. For example, 5==5 will return true.
>	Greater than: Represented as ‘>’, the greater than operator checks whether the first operand is greater than the second operand or not. If so, it returns true. Otherwise, it returns false. For example, 6>5 will return true.
<	Less than: Represented as ‘<‘, the less than operator checks whether the first operand is lesser than the second operand. If so, it returns true. Otherwise, it returns false. For example, 6<5 will return false.
!=	Not equal to: Represented as ‘!=’, the not equal to operator checks whether the two given operands are equal or not. If not, it returns true. Otherwise, it returns false. It is the exact boolean complement of the ‘==’ operator. For example, 5!=5 will return false.
>=	Greater than or equal to:  Represented as ‘>=’, the greater than or equal to operator checks whether the first operand is greater than or equal to the second operand. If so, it returns true else it returns false. For example, 5>=5 will return true.
<=	Less than or equal to:  Represented as ‘<=’, the less than or equal to operator checks whether the first operand is less than or equal to the second operand. If so, it returns true else false. For example, 5<=5 will also return true.

Logical Operators: 
They are used to combine two or more conditions/constraints or to complement the evaluation of the original condition under consideration. They are described below: 
Logical AND operator: The ‘&&’ operator returns true when both the conditions under consideration are satisfied. Otherwise, it returns false. For example, a && b returns true when both a and b are true (i.e. non-zero).
Logical OR operator: The ‘||’ operator returns true even if one (or both) of the conditions under consideration is satisfied. Otherwise, it returns false. For example, a || b returns true if one of a or b, or both are true (i.e. non-zero). Of course, it returns true when both a and b are true.
Logical NOT operator: The ‘!’ operator returns true the condition in consideration is not satisfied. Otherwise, it returns false. For example, !a returns true if a is false, i.e. when a=0.
*/
# include <stdio.h>
int main()
{
    int a,b;
    printf("enter the value a:\n");
    scanf("%d",&a);
    printf("enter the value b:\n");
    scanf("%d",&b);
    printf("a>=b || a<=b %d\n",((a>=b) || (a<=b)));
    printf("a>=b && a<=b %d\n",((a>=b) && (a<=b)));
    printf("a>=b != a<=b %d\n",((a>=b) != (a<=b)));
    return 0;
}    