#include<stdio.h>
#include<conio.h>
int main()
{
    int num,count=0,i,dub;
    printf("\n enter the number : ");
    scanf("%d",&num);
    dub=num;
    for(i=1; i<=num;)
    {
        num=num/10;
        count++;
    }
    printf("\n %d is count is : %d",dub,count);
    return 0;
}
