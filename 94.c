#include <stdio.h>
struct person
{
    int eage;
    char name[20];
    float salary;
};
int main()
{
    struct person *ptr,e;
    ptr=&e;
    printf("enter person age: ");
    scanf("%d",&ptr->eage);
    printf("enter person name: ");
    scanf("%s",&ptr->name);
    printf("enter employee salary: ");
    scanf("%f",&ptr->salary);
    printf("\n person age %d",ptr->eage);
    printf("\n person name %s",ptr->name);
    printf("\n person salary %f",ptr->salary);
    return 0;

<<<<<<< HEAD
}
=======
}
>>>>>>> cd78cd477aedb5879c69de2c779af5d2e2e48f48
