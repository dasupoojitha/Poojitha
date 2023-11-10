/*c programto print the arithmetic operators.
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
*/
#include <stdio.h>
int main()
{
    int a,b;
    
    printf("enter the value of a:\n");
    scanf("%d",&a);
    printf("enter the value of b:\n");
    scanf("%d",&b);
    printf("addition of two numbers %d\n",a+b);
    printf("subtraction of two numbers %d\n",a-b);
    printf("multiplication of two numbers %d\n",a*b);
    printf("division of two numbers %d\n",a/b);
    return 0;
}
