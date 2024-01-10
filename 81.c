#include <stdio.h>
#include <string.h>
struct attendence
{
    char section[50];
    char class[30];
    char schoolname[100];
};
void main()
{
    struct attendence s={"A","e-Tech","Narayana group of schools"};
    printf("section: %s",s.section);
    printf("\nauthor name : %s",s.class);
    printf("\nsubject: %s",s.schoolname);
}