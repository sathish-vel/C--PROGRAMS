#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,s;
    printf("\n Enter a rows : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j==1||i==n||i==1||j==n||i==j||j==n-i+1)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
