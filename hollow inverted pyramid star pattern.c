#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,j,k;
    printf("\n enter a row : ");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    {
        for(k=1; k<=n-i; k++)
        {
            printf("  ");
        }
        for(j=1; j<=2*i-1; j++)
         if(i==n||j==1||j==2*i-1)
        {
            printf("* ");
        }
        else{
            printf("  ");
        }
        printf("\n");
    }
}



