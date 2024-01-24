#include <stdio.h>
void sum()
{
    sum();
    sum();
    sum();
}
void main()
{
    static int x=1;
    x=x+5;
    printf("%d",x);
<<<<<<< HEAD
}
=======
}
   
    
>>>>>>> cd78cd477aedb5879c69de2c779af5d2e2e48f48
