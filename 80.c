#include <stdio.h>
#include <conio.h>
struct student
{
    char title[50];
    char author[20];
    char subject[50];
};
void main()
{
struct student s={"C Programming","Poojitha","C Programming Tutorial"};
printf("title of the book: %s",s.title);
printf("\n author name : %s",s.author);
printf("\n subject: %s",s.subject);
}