#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c,i,j,k,sum,
        a[50][50],b[50][50],m[50][50];
    printf("\n enter rows and columns : ");
    scanf("%d%d",&r,&c);
    printf("\n enter first matrix values : \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    printf("\n the first matrix is :\n ");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }


    printf("\n the second matrix values :\n ");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n enter second matrix is :\n ");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    printf("\n multiplication of matrix :\n ");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            m[i][j]=0;
            for(k=0; k<c; k++)
            {
                m[i][j]=m[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }







}

