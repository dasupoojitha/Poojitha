/* files: a file represents a sequence of bits on the disck where a group of related data is stored files is created for perment storage of data.
fputc():this function is used to write a character to file.
fclose():fclose function is used to create a new file or to open an existing file.
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    FILE *ptr;
    char ch='p';
    ptr = fopen("file.txt", "w");
    if (ptr == NULL)
    {
        printf("file unable to open");
    }
    else
    {
        printf("file opened successfully");
        fputc(ch, ptr);
        fputc('o', ptr);
        fputc('o', ptr);
        fputc('j', ptr);
        fputc('i', ptr);
        fputc('t', ptr);
        fputc('h', ptr);
        fputc('a', ptr);
        fclose(ptr);
        getch();
    }
}