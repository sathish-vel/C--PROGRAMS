#include<stdio.h>
#include<conio.h>
void main()
{
    int pow,base,i,sum=1;
    printf("\n Enter the base number : ");
    scanf("%d",&base);
    printf("\n Enter the power number : ");
    scanf("%d",&pow);
    for(i=pow;i>0;i--)
    {
        sum=sum*base;
    }
    printf("\n %d",sum);
}
