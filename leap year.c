#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    printf("\n enter the year : ");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
            printf("\n %d this year is leap year",year);
        else
            printf("\n %d this year is not a leap year",year);
    }
    else if(year%4==0)
        printf("\n %d this year is leap year",year);
    else
        printf("\n %d this year is not a leap year",year);
}

