#include<stdio.h>
#include<conio.h>
int main()
{
    int dub,num,endNum,i,sum=0;
    scanf("%d",&num);
    scanf("%d",&endNum);
    for(i=num; i<=endNum; i++)
    {
        num=num+2;
        if(endNum>num)
        printf("%d ",num);
    }
    return 0;
}
