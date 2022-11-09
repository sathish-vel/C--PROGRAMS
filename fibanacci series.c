#include<stdio.h>
#include<conio.h>
void main()
{
    int a=0,b=1,n,i,c;
    printf("\n  0 and 1 are initial value ");
    printf("\n enter the limits : ");
    scanf("%d",&n);
    n=n-2;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }

}
