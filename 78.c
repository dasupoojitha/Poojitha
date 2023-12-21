#include <stdio.h>
int main()
{
FILE*fptr;
fptr=fopen("file ","w");
if(fptr==NULL)
{
printf("the file not able to open");
}
else
{
printf("the is sucessfully writting");
}
fclose(fptr);
}