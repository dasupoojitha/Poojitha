#include <stdio.h>
int main()
{
    int Rate=10;
    int tickets;
    int amount;
    printf("\n \t\t\t\t\tDR.B.R.Ambedkar\t\t\t\t\t");
    printf("\n \t\t\t\t Statue Of Social Justice \t\t\t\t");
    printf("\n \t\t\t\t\tVijayawada\t\t\t\t\t\t\t");
    printf("\n \t\t\t\t\t Adult Ticket :");
    scanf("%d",&tickets);
    printf("\n\n \tcategory\t\t\tRate\t\tNo.Of.Tickets\t\t\tAmount\t\t\t");
    amount=Rate*tickets;
     printf("\n\tAdult\t\t\t %d\t\t\t%d\t\t\t%d",Rate,tickets,amount);
   int childrate=5;
   int tickets1;
   int a;
    printf("\n \t\t\t\t\t Child Ticket :");
    scanf("%d",&tickets1);
    a=childrate*tickets1;
    printf("\n\tChildren\t\t %d\t\t\t%d\t\t\t%d",childrate,tickets1,a);
    printf("\n\n \t\t\t\tThank You For Visting!!!!");
}   