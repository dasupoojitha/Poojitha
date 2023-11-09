/*write a c programto print x value where the x=y==z then the the statement x = y==z. The operator == is executed before = because precedence of comparison operators (<=, >= and ==) is higher than assignment operator =. 
The result of a comparison operator is either 0 or 1 based on the comparison result. Since y is equal to z, value of the expression y == z becomes 1 and the value is assigned to x via the assignment operator.*/
#include <stdio.h>
int main()
{
   int x,y=5,z=5;
   x=y==z;// x value are y=5 and z=5 are x=5==5,both y and z values are true so it return 1.
   printf("%d",x);
   
   return 0;
}