#include<stdio.h>
#include<conio.h>
void myfunction(int*,int*);
int main()
{
    int function,n,n1;
    printf("enter the numbers :\n ");
    scanf("%d%d",&n,&n1);
    printf("\n before swapping value is : %d  %d  ",n,n1);
    myfunction(&n,&n1);
    printf("\n before swapping value is : %d  %d  ",n,n1);
}
void myfunction(int*n,int*n1)
{
    int temp;
    temp=*n;
    *n=*n1;
    *n1=temp;
}
