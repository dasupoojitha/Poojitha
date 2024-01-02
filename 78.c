#include <stdio.h>
int main()
{
FILE*fptr;
int num=12;
fptr=fopen("file.txt ","r");
fprintf(fptr,"the number is %d\n ",num);
fprintf(fptr,"the file is sucessfully writting");
fclose(fptr);
}