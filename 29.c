/*c program using array with integer to change the value of array 
To change the value of a specific element, refer to the index number:

Example
myNumbers[0] = 33;
*/
#include <stdio.h>
int main()
{
 int num[]={24,45,57,79,91,13};
 num[1]=41;
 printf("the output will be %d",num[1]);
 return 0;
}