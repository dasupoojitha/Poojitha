// c program using accessing the student marks 
#include <stdio.h>
#include <conio.h>
struct student
{
    int sno;
    char sname[20];
    float marks;
};
void main()
{
struct student s={101,"shiva",95.4};
printf("Size of structure variable is=%d",sizeof(s));
printf("\n student details: %s ",s.sname);
printf("\n student number is=%d",s.sno);
}