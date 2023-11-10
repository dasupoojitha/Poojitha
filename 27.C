/* C program using compount interest.
Compound interest is the interest calculated on the principal and the interest accumulated over the previous period. It is different from simple interest, where interest is not added to the principal while calculating the interest during the next period. In Mathematics, compound interest is usually denoted by C.I.
Compound Interest Formula
As we have already discussed, the compound interest is the interest-based on the initial principal amount and the interest collected over the period of time.  The compound interest formula is given below:

formula:
Compound Interest = Amount – Principal
Where,

A = amount
P = principal
r = rate of interest
n = number of times interest is compounded per year
t = time (in years)
Alternatively, we can write the formula as given below:

CI = A – P
*/
#include <stdio.h>
int main()
{
 int compundinterest,amount,principle;
 printf("enter the value amount:\n");
 scanf("%d",&amount);
 printf("enter the value of principle:\n");
 scanf("%d",&principle);
 compundinterest=amount - principle;
 printf("compundinterest is %d\n",compundinterest);
 return 0;
}