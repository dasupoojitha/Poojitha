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
  struct student s1,s2;
    printf("enter the rollno:");
    scanf("%d",&s2.rollno);
    printf("enter the name:");
    scanf("%s",&s2.sname);
    printf("enter the marks:");
    scanf("%f",&s2.marks);
    s1=s2;
    printf("%d %s %f",s1.rollno,s1.sname,s1.marks);
    printf("%d %s %f",s2.rollno,s2.sname,s2.marks);
return 0;
}