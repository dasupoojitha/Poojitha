#include <stdio.h>
#include <conio.h>
void main()
{
    FILE *fptr;
    char str[100];
    fptr=fopen("xyz.txt","r");
    if(fptr==NULL)
    {
        printf("file is unable to open");
    }
    else
    {
    printf("Data in the file: ");
    fgets(str,50,fptr);
    puts(str);
    fclose(fptr);
    }
    getch();
}