#include<stdio.h>
#include<conio.h>
void main()
{
    int fact,i,dub;
    scanf("%d",&fact);
    dub=fact-1;
    for(i=fact;i>1;i--)
    {
        fact=fact*dub;
        dub--;
    }
     printf("\n%d",fact);
}
