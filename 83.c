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
    struct student s;
    s.rollno=1;
    s.sname="raja";
    s.marks=96;
    printf("%d %s %f",s.rollno,s.sname,s.marks);
    return 0;
}