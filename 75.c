#include <stdio.h>
int main()
{
    int size_of_int=sizeof(int);
    printf("the size of int data type:%d \n",size_of_int);
    int size_of_char=sizeof(char);
    printf("the size of char data type:%d \n",size_of_char);
    int a =32768;
    int b = -32767;
    printf("int range %d to %d\n ",a,b);
    char c= -128;
    char d=127;
    printf("char range %d to %d",c,d);

    return 0;


}