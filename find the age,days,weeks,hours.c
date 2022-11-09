#include<stdio.h>
#include<conio.h>
void main()
{
    int birthYear,currentYear,age,days,weeks,hrs,months;
    printf("\n enter a birth year : ");
    scanf("%d",&birthYear);
    printf("\n enter a current year : ");
    scanf("%d",&currentYear);
    age=currentYear-birthYear;
    days=age*365;
    weeks=days/7;
    months=days/30;
    hrs=weeks*7*24;
    printf("\n Your Age is : %d",age);
    printf("\n Your Days is : %d",days);
    printf("\n Your Weeks is : %d",weeks);
    printf("\n Your months is : %d",months);
    printf("\n Your Hours is : %dhrs",hrs);
}

