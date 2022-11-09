#include<stdio.h>
#include<conio.h>
void main()
{
    int choice,quantity,amount;
    printf("\t\tMENU CARD");
    printf("\n\t 1.COFFEE       RS:15");
    printf("\n\t 2.TEA          RS:10");
    printf("\n\t 3.COLD MILK    RS:25");
    printf("\n\t 4.MILK SHAKE   RS:50");
    printf("\n Enter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:

        printf("\n You have selected COFFEE ");
        printf("\n enter the quantity");
        scanf("%d",&quantity);
        printf("\n the total amount : %d",(quantity*15));
        break;

    }

}
