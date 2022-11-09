#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,sum,x,y,a,b;
    printf("enter the number :\n ");
    scanf("%d",&n);
    int strong=function(n);
    if(n==strong)
    {
        printf("this is a strong number ");
    }
    else
    {
        printf("this is not a strong number ");
    }
    return 0;
}
int function(int n)
{
    int i,j,sum=0,rem,strong=0,fact;
    while(n>0)
    {
        rem=n%10;
        fact=1;
        for(i=1; i<=rem; i++)
        {
            fact=fact*i;
        }
        strong+=fact;
        n=n/10;
    }
    return strong;
}
