/*c program using reversing a string
Reversing a string is the technique that reverses or changes the order of a given string so that the last character of the string becomes the first character of the string and so on. Furthermore, we can also check the Palindrome of the given string by reversing the original string.
For example, we enter a string "APPLE", and then use the reverse algorithm. The reverse algorithm returns the string "ELPPA" which is completely reverse of the original string.

There are various ways to reverse a string in C. In this shall, we shall mainly be covering the following ways:

Reverse a string using the strrev() function

Reverse a string without using the library function

Reverse a string using the recursion function

Reverse a string using for loop

Reverse a string using a while loop

Reverse a string using pointers

Let's consider an example to print the reverse of a string using the strrev() function.
*/
#include <stdio.h>
#include <string.h>
int main()
{
 char str[50];// declare the size of character string 
 printf("\n enter a string to be reverse:");
 scanf("%s",&str);
// use strrev() function to reverse a string  
 printf("enter the string after reverse is: %s",strrev(str));
 return 0;
}