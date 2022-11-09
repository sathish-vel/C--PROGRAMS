#include<stdio.h>
#include<conio.h>
void main()
{
    int n,ld,sum=0,count=0;
    n=2344;
    while(n>0)
    {
        ld=n%10;
        sum=sum+ld;
        n=n/10;
        count++;
    }
    printf("\n the sum of the digits : %d",sum);
    printf("\n the count is: %d",count);
}
