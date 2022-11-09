#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,ld,sum=0,count=0;
    printf("\n enter a number : ");
    scanf("%d",&n);
    while(n>0)
    {
        ld=n%10;
        sum=sum*10+ld;
        n=n/10;
        count++;
    }
    printf("\n reverse number is : %d",sum);
    printf("\n reverse number is : %d",count);
}
