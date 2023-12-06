// Write a C Program to print the Month Number And Display Month Name Using Switch Case program .

#include <stdio.h>

int main()
{
    int months;
    printf("\n enter the month number : ");
    scanf("%d", &months);
    switch (months)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    default:
        printf("it was not a month");
    }
}