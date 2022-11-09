#include<stdio.h>
#include<conio.h>
void main()
{
    int days;
    printf("\n Enter a days : ");
    scanf("%d",&days);
    if(days>=5 && days<=1)
    {
        printf("\n Your fine fees is : 50/-paise. ");
    }
    else if(days>=6 && days<=10)
    {
        printf("\n Your fine fees is : 1/-rupee. ");
    }
    else if(days>=10 && days<=29)
    {
        printf("\n Your fine fees is : 5/-rupee. ");
    }
        else
    {
        printf("\n Your membership will be canceled ");
    }
}
