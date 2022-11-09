#include<stdio.h>
#include<conio.h>
void main()
{
    int n,n1,i,j;

    printf("\n Enter a number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n Enter a number : ");
    scanf("%d",&n1);
    for(i=1; i<=n1; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
