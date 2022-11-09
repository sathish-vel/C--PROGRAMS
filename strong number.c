#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem,i,fact,sum=0,strong,count=0;
    printf("\n enter a number : ");
    scanf("%d",&num);
    strong=num;
    while(num!=0)
    {
        rem=num%10;
        fact=1;
        for(i=1; i<=rem; i++)
            fact=fact*i;
        sum=sum+fact;
        num=num/10;
    }
    if(strong==sum)
    {
        printf("\n  the number is strong ");
    }
    else
    {
        printf("\n the number is a not strong ");
    }
}
