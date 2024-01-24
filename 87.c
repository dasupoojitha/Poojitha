#include <stdio.h>
#include <string.h>
struct student
{
    int rollno;
    char sname;
    float marks;
};
int main()
{ 
  struct student s,s1,s2;
    printf("enter the rollno:");
    scanf("%d",&s.rollno);
    printf("enter the name:");
    scanf("%s",&s.sname);
    printf("enter the marks:");
    scanf("%f",&s.marks);
    printf("%d %s %f",s.rollno,s.sname,s.marks);
    return 0;
}