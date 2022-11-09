#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0,ld,x;
    printf("\n enter a number : ");
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        ld=n%10;
        sum=sum*10+ld;
        n=n/10;
    }
    if(sum==x)
    {
        printf("\n %d is a palindrome ",x);
    }
    else
    {
        printf("\n %d is a not a palindrome",x);

    }
}
