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
    struct student s,s1,s2;
    s.rollno=1;
    s.sname="raja";
    s.marks=96;
    s1.rollno=2;
    s1.sname="roja";
    s1.marks=98;
    s2.rollno=3;
    s2.sname="pooja";
    s2.marks=99;
    printf("%d %s %f",s.rollno,s.sname,s.marks);
    printf("\n %d %s %f",s1.rollno,s1.sname,s1.marks);
    printf("\n %d %s %f",s2.rollno,s2.sname,s2.marks);
    return 0;
}