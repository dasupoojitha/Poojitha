/*Loop Through an Array:
You can loop through the array elements with the for loop.
*/
#include <stdio.h>
int main() {
  int a[] = {25, 50, 75, 100};
  int i;
  
  for (i = 0; i < 4; i++) {
    printf("%d\n", a[i]);
  }


  return 0;
}