#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("\n enter a number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=n; j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
