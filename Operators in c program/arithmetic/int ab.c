/*c program to print both relational & arithmetic.

Relational Operators:Relational operators are used to compare two values in C language. It checks the relationship between two values. If relation is true, it returns 1. However, if the relation is false, it returns 0.
Operators	Operator Name
==	Equal to: Represented as ‘==’, the equal to operator checks whether the two given operands are equal or not. If so, it returns true. Otherwise, it returns false. For example, 5==5 will return true.
>	Greater than: Represented as ‘>’, the greater than operator checks whether the first operand is greater than the second operand or not. If so, it returns true. Otherwise, it returns false. For example, 6>5 will return true.
<	Less than: Represented as ‘<‘, the less than operator checks whether the first operand is lesser than the second operand. If so, it returns true. Otherwise, it returns false. For example, 6<5 will return false.
!=	Not equal to: Represented as ‘!=’, the not equal to operator checks whether the two given operands are equal or not. If not, it returns true. Otherwise, it returns false. It is the exact boolean complement of the ‘==’ operator. For example, 5!=5 will return false.
>=	Greater than or equal to:  Represented as ‘>=’, the greater than or equal to operator checks whether the first operand is greater than or equal to the second operand. If so, it returns true else it returns false. For example, 5>=5 will return true.
<=	Less than or equal to:  Represented as ‘<=’, the less than or equal to operator checks whether the first operand is less than or equal to the second operand. If so, it returns true else false. For example, 5<=5 will also return true.

Arithmetic Operators:Arithmetic Operators are the type of operators in C that are used to perform mathematical operations in a C program. They can be used in programs to define expressions and mathematical formulas.
Arithmetic Operator is used to performing mathematical operations such as addition, subtraction, multiplication, division, modulus, etc., on the given operands.
Plus Operator:It is a simple Plus (+) Operator used to add two given operands. We can use Plus Operator with different data types such as integer, float, long, double, enumerated and string type data to add the given operand.
syntax:
C = A + B;  
Minus Operator:The minus operator is denoted by the minus (-) symbol. It is used to return the subtraction of the first number from the second number. The data type of the given number can be different types, such as int, float, double, long double, etc., in the programing language.
Syntax:
C = A - B;  
Multiplication Operator:The multiplication operator is represented as an asterisk (*) symbol, and it is used to return the product of n1 and n2 numbers. The data type of the given number can be different types such as int, float, and double in the C programing language.
Syntax:
C = A * B;  
Division Operator:The division operator is an arithmetic operator that divides the first (n1) by the second (n2) number. Using division operator (/), we can divide the int, float, double and long data types variables.
Syntax:
C = A / B;  
Modulus Operator:The modulus operator is represented by the percentage sign (%), and it is used to return the remainder by dividing the first number by the second number.
Syntax:
C = A % B;
Increment Operator:Increment Operator is the type of Arithmetic operator, which is denoted by double plus (++) operator. It is used to increase the integer value by 1.
Syntax:
B = A++;  
Decrement Operator:Decrement Operator is denoted by the double minus (--) symbol, which decreases the operand value by 1.
Syntax:
B = A--; 
Float: C programming float data type is used to store floating-point values. Float in C is used to store decimal and exponential values. It is used to store decimal numbers (numbers with floating point values) with single precision.
the float data type in C is used to store floating-point numbers, which are numbers with a decimal point. Floats have limited precision, but they are useful for many scientific and mathematical applications. 
Range: 1.2E-38 to 3.4E+38
Size: 4 bytes
Format Specifier: %f
Plus Operator:It is a simple Plus (+) Operator used to add two given operands. We can use Plus Operator with different data types such as integer, float, long, double, enumerated and string type data to add the given operand.
syntax:
C = A + B; 
>	Greater than: Represented as ‘>’, the greater than operator checks whether the first operand is greater than the second operand or not. If so, it returns true. Otherwise, it returns false. For example, 6>5 will return true.
<	Less than: Represented as ‘<‘, the less than operator checks whether the first operand is lesser than the second operand. If so, it returns true. Otherwise, it returns false. For example, 6<5 will return false.
Sum of both a<b and a>b are %f float values and output is printed in the decimal number format only.
*/
#include <stdio.h>
int main()
{
    float a,b;
    printf("enter the value of a:\n");
    scanf("%f",&a);
    printf("enter the value of b:\n");
    scanf("%f",&b);
    printf("a<b+ a>b is %f \n",((a<b)+(a>b)));
    return 0;
}