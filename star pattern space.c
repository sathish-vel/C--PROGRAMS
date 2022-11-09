#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,r;
    printf("\n enter a row : ");
    scanf("%d",&r);
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(j==1||i==j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
