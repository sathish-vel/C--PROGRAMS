
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,j,k,m;
    printf("\n e,mnter a row : ");
    scanf("%d",&n);
    m=n;
    for(i=1; i<=n; i++)
    {
        for(k=1; k<=n-i; k++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            if(i==n||i==j||j==n-m)
            {
                printf("*");
                m--;
            }
                else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}
