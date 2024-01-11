// write a c program using rock,paper and scissor randomlly
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int game(char me, char system)
{
    if (me == system)
        return -1;
    if (me == 'r' && system == 'p')
        return 0;
    else if (me == 'p' && system == 'r')
        return 1;
    if (me == 's' && system == 'p')
        return 1;
    else if (me == 'p' && system == 's')
        return 0;
    if (me == 's' && system == 'r')
        return 0;
    else if (me == 'r' && system == 's')
        return 1;
}
int main()
{
    int n, random;
    char me, system;
    srand(time(0));
    n = rand() % 3 + 1;
    if (n == 1)
        system = 'r';
    else if (n == 2)
        system = 'p';
    else
        system = 's';
    printf("rock paper scissor game !!!!\n");
    scanf("%c", &me);
    random = game(me, system);
    if (random == -1)
    {
        printf("\nBoth are in same Phase");
    }
    else if (random == 1)
    {
        printf("\nWOW!You won the game");
    }
    else
    {
        printf("\nOH!You loss the game");
    }
    printf("\nyour choosen :%c and system choosen:%c", me, system);
    return 0;
}
