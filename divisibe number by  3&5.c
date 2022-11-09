#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    printf("\n 3 divisible number are : ");
    for(i=1; i<=100; i++)
    {
        if(i%3==0)
            printf("%d ",i);
    }
    printf("\n 5 divisible number are : ");

    for(i=1; i<=100; i++)
    {
        if(i%5==0)
            printf("%d ",i);
    }
}
