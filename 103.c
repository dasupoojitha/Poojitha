#include <stdio.h>
#include <conio.h>
void main()
{
    FILE *fptr;
    char str[100];
    fptr=fopen("xyz.txt","w");
    if(fptr==NULL)
    {
        printf("file is unable to open");
    }
    else
    {
        printf("enter the text: ");
    }
    gets(str);
    fputs(str,fptr);
    fclose(fptr);

    getch();
}