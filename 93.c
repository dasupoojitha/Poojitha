#include <stdio.h>
struct employee
{
    int eno;
    char name[20];
    float salary;
};
int main()
{
    struct employee *ptr,e;
    ptr=&e;
    printf("enter employee number: ");
    scanf("%d",&ptr->eno);
    printf("enter employee name: ");
    scanf("%s",&ptr->name);
    printf("enter employee salary: ");
    scanf("%f",&ptr->salary);
    printf("\n employee number %d",ptr->eno);
    printf("\n employee number %s",ptr->name);
    printf("\n employee number %f",ptr->salary);
    return 0;

<<<<<<< HEAD
}
=======
}
>>>>>>> cd78cd477aedb5879c69de2c779af5d2e2e48f48
