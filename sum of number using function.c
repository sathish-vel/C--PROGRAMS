#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,sum,x,y,a,b;
    printf("enter the two numbers :\n ");
    scanf("%d%d",&a,&b);
    sum=sumoffunction(a,b);
    x=mul(a,b);
    y=div(a,b);
    printf("\n the sum of the number is : %d",sum);
    printf("\n the multiplication  of the number is : %d",x);
    printf("\n the divided of the number is : %d",y);
    return 0;
}
int sumoffunction(int a,int b)
{
    int sum;
    return sum= a+b;
}
int mul(int a,int b)
{
    int x;
    return x= a*b;
}
int div(int a,int b)
{
    int y;
    return y= a-b;
}
