// write a c program to print hotel bill and menus in the hotel.
#include <stdio.h>
int main() 
{
int choice = -1;
printf("------------------------------------------------------------------------------");
printf("\n\t\t\t\tMENU:\n\t\t\t\t1.Coffee \n\t\t\t\t2. Tea \n\t\t\t\t3. Exit\t\t\t\t");
int n=1;
while(n){
        printf("\nEnter your choice:");
        scanf("%d", &choice);
        if(choice == 1){
            printf("Enjoy your Coffee!\n");
        }
        else if (choice == 2){
            printf("Enjoy your Tea!\n");
        }
        else if (choice == 3){
printf("\n------------------------------------------------------------------------------\n");
            printf("Enjoy The Day\nThank you for Visiting!!!!");
printf("\n\t\t\t\t************\t\t\t\t\t\n");
break;
        }        
        else
        {
            printf("Not Available Now\n");
        }
    }
    return 0;
}