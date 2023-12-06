// c program using nested if statement to check the marks of students who is scored the greatest marks and same marks and also less marks .
#include <stdio.h>
int main()
{
    int poojitha, praveena;
    printf("enter the value of marks of poojitha: ");
    scanf("%d", &poojitha);
    printf("enter the value of marks of praveena: ");
    scanf("%d", &praveena);
    if (poojitha >=praveena)
    {
        if (poojitha == praveena)
        {
            printf("poojitha and praveena scored same marks");
        }
        else
        {
            printf("poojitha scored more marks then praveena");
        }
    }
    else
    {
    printf("praveena scored more marks then poojitha");
    }
    return 0;
}