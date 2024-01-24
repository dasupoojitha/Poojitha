#include <stdio.h>
#include <conio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("file.txt","r");
    if (ptr == NULL)
    {
        printf("file unable to open");
    }
    else
    {
        printf("file opened successfully");
    }
    while (ch = fgetc(ptr) != EOF)
    {
        printf("%c", ch);
    }

    fclose(ptr);
    getch();
}