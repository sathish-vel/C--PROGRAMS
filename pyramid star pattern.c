#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,j,k;
    printf("\n enter a row : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(k=1; k<=n-i; k++)
        {
            printf("  ");
        }
        for(j=1; j<=2*i-1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}


