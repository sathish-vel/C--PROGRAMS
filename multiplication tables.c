#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0;
    printf("\n enter the table : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        sum=i*n;
        printf("\n%d * %d = %d \n",i,n,sum);
    }
}
