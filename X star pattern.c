#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,;
    printf("\n enter a number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n;j++)
            if(i==j||j==n-i+1)
           {
                printf("* ");
           }
        else
            printf("  ");
        printf("\n");
    }
}
