#include <stdio.h>
struct employee
{
    int empno;
    char name[20];
    float salary;
};
int main()
{
    struct employee e[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("\n enter employee details %d",i+1);
        scanf("%d %s %f",&e[i].empno,&e[i].name,&e[i].salary);
    }
    printf("\n enter employee details:");
    printf("\n\n numbers \t\t name \t\t\tsalary");
    for(i=0;i<3;i++)
    {
        printf("\n\n %d \t\t %s \t\t %f",e[i].empno,e[i].name,e[i].salary);
    }
    return 0;
}