/* c program to calculate simpleinterest for set values representing principal  ,no. of years and rate of interest.
Simple interest is calculated by multiplying the interest rate by the principal amount and the time period which is generally in years. The S.I. formula is given as:
Formula:
Simple Interest (SI) = P × T × R ⁄ 100.
where;
A	=	final amount
P	=	initial principal balance
r	=	annual interest rate
t	=	time (in years)
*/
#include <stdio.h>
int main()
{
    int Principle=10,Rate=5,Time=8,SI;
    SI=Principle*Rate*Time/100;
    printf("enter the value of SI is %d\n",SI);
    return 0;
}