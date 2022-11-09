#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,j,k;
    printf("\n enter a row : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("*");
        }
     printf("\n");
    }
}
