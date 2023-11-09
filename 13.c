//write a c program of sum of five numbers. Without using an array: If you do not want to use an array, you can also find the sum of 5 numbers without one.To do this, you would simply declare 5 integer variables to store the 5 numbers. Then, you would use a for loop to iterate through the variables and add each number to the sum.
#include <stdio.h>
int main()
{
    int a = 1, b = 2, c = 5, d = 6, e = 8, f = 9;//declare the values to variables
    printf("%d", a + b + c + d + e + f);// adding all the given five numbers 
    return 0;
}