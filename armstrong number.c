#include<stdio.h>
#include<conio.h>
void main()
{
    int num,n,i,sum=1,result=0,count=0,rem;
    printf("\n enter a number : ");
    scanf("%d",&num);
    n=num;
    for(i=0; n>0; i++)
    {
        n=n/10;
        count++;
    }
    n=num;
    for(i=0;n>0;i++)
    {
        rem=n%10;
        for(i=1;i<=count;i++)
        {
            sum=sum*rem;
        }
        result=result+sum;
        sum=1;
        n=n/10;
    }
    if(result==num)
    {
        printf("\n %d it is a armstrong number ",num);
    }
else
        {
        printf("\n %d it is a not  armstrong number ",num);
    }
}
