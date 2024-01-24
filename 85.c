#include <stdio.h>
#include <string.h>
struct student
{
    int rollno;
    char *sname;
    float marks;
};
int main()
{
    struct student s1,s2;
    s2.rollno=1;
    s2.sname="raja";
    s2.marks=96;
    s1=s2;
    printf("%d %s %f",s1.rollno,s1.sname,s1.marks);
    printf("\n%d %s %f",s2.rollno,s2.sname,s2.marks);
return 0;
}