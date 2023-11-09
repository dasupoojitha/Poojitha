/*C program on perimeter of the rectangle.
The perimeter of a rectangle is the total distance covered by its boundaries or the sides. Since there are four sides of a rectangle, thus, the perimeter of the rectangle will be the sum of all four sides.
Since the perimeter is equal to the sum of all the sides of the polygon. Hence, in the case of a rectangle, the perimeter (P) is;
P = sum of all its four sides
P = l + w + l + w   (Opposite sides of rectangle are equal)
P = 2(l + w)
Hence, derived.
Therefore,
Perimeter of a rectangle = 2(Length + Width) square units.
*/
#include <stdio.h>
#define P 2
int perimeter(int length,int width);
int main()
{
    int length;//declaring the length rectangle
    printf("enter the  length:\n");
    scanf("%d",&length);
    int width;//declaring the width of rectangle
    printf("enter the  width:\n");
    scanf("%d",&width);
    printf("perimeter of a rectangle in %d\n",(perimeter(length,width)));
}
int perimeter(int length,int width)
{
    //formula for perimeter of rectangle P=2(l+w)
    return (P*(length+width));
}