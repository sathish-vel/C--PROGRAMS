#include<stdio.h>
#include<conio.h>
void main()
{
    int num,bin[50],i,count=0;
    printf("\n enter a decimal number : ");
    scanf("%d",&num);
    i=0;
    while(num>0)
    {
        bin[i]=num%2;
          num=num/2;
        i++;

        count++;
    }
    //printf("\n %d",count);
    count=count-1;
    for(i=count;i>=0;i--)
    {
        printf("%d",bin[i]);
    }
}
