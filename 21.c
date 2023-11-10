/* c program to calculate area of a rectangle.
Area of a rectangle is the amount of space occupied by the rectangle. A rectangle can be defined as the plain figure with two adjacent sides equal in length. The 4 angles present in the rectangle are also equal. A rectangle can be divided into 4 similar square. The measurement of each interior angle in a rectangle is 90 degrees.
Area of a rectangle is the number of square units takes to fill a rectangle completely.

Formula:
A= W x H  

where;
A is the area of the rectangle
W is the width of the rectangle
H is the height of the rectangle
*/
# include <stdio.h>
int main()
{
 int area,width,height;
 printf("enter the value width:\n");
 scanf("%d",&width);
 printf("enter the value height:\n");
 scanf("%d",&height);
area=width*height;
 printf("the area of rectangle is :%d\n",area);
 return 0;
}