#include <stdio.h>
int main()
{
 int a,quality,rate,total;
 printf("\nMENU CARD \nSelect your drink: \n1.COFFEE \n2.TEA \n3.COLD COFFEE \n4.MILK SHAKE \n5.STALC\n");
printf("enter your choice:");
scanf("%d",&a);
 switch(a)
 {

  case 1:
    printf("\nYou have selected Coffee.\n Enter the quantity :");
    scanf("%d",&quality);
    rate=5;
    total=quality*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 2:
    printf("\nYou have selected Tea.\n Enter the quantity :");
    scanf("%d",&quality);
    rate=10;
    total=quality*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 3:
    printf("\nYou have selected Cold coffee.\n Enter the quantity :");
    scanf("%d",&quality);
    rate=15;
    total=quality*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 4:
    printf("\nYou have selected Milk shake.\n Enter the quantity :");
    scanf("%d",&quality);
    rate=20;
    total=quality*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 5:
    printf("\nYou have selected Stalc.\n Enter the quantity :");
    scanf("%d",&quality);
    rate=15;
    total=quality*rate;
    printf("\nTotal amount :%d",total);
    printf("\nthank you for visiting!!!!");
    break;
  default:
    printf("\nSorry Unavailable...%d",a);
    break;
 }
return 0;
}