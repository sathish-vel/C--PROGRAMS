#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 a=10;
 b=20;
 printf("\n before swapping : a is : %d b is : %d",a,b);
 a=a+b;//30
 b=a-b;//10
 a=a-b;//20
 printf("\n after swapping a is : %d b is : %d ",a,b);
}
