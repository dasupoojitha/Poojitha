/*c program on the logical operators.
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
    return 0;
}    