#include<stdio.h>
#include<conio.h>
int function(int[],int);
int main()
{
    int i,j,n,sum,sub,a[50];
    printf("enter the limits : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    sum=function(a,n);
    sub=subOfFunction(a,n);//function calling
    printf("\n the sum of the array is : %d",sum);
    printf("\n the subraction of the array is : %d",sub);
    return 0;
}
            //function difinition:
int function(int a[],int n)//called function.
{
    int i,sum=0;
    for(i=0; i<n; i++)
    {
        sum+=a[i];////////body
    }
    return sum;

}

int subOfFunction(int a[],int n)
{
    int i,sub=0;

    for(i=0; i<n; i++)
    {
        sub-=a[i];
    }
    return sub;

}


