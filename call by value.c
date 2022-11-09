
#include<stdio.h>
#include<conio.h>
void myfunction(int);
int main()
{
    int function,a;
    printf("enter the numbers :\n ");
    scanf("%d",&a);
    myfunction(a);
    printf("\n%d  ",a);
    return 0;
}
void myfunction(int num)
{
    num=num+10;
}
