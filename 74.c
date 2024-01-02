// c program using random number printing
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i, j, nk = 1;
    srand(time(0));
    i = rand() % 100 + 1;

    do
    {
        printf("enter the value of 1 to 100 \n");
        scanf("%d", &j);
        if (j>i)
        {
            printf("lower value\n");

        }
        else if (j < i)
        {
            printf("higher number\n");
        }
        else
        {
            printf("you guessed in %d attempts\n", nk);
        }
        nk++;
    } while (j != i);

    return 0;
}
