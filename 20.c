#include <stdio.h>
#include <string.h>
int main()
{
 char str[50];
 printf("\n enter a string to be reverse:");
 scanf("%s",&str);
 printf("enter the string after reverse is: %s",strrev(str));
 return 0;
}