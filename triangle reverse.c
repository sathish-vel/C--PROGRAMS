#include<stdio.h>
#include<conio.h>
void main()
{
    int i,k,j,n;
    printf("\n enter the rows : ");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
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

