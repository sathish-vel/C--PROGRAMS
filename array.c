#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("enter a number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i*i; j++)
        {
            printf("X ");
        }
        printf("\n");
    }
}
