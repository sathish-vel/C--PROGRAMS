#include<stdio.h>
#include<conio.h>
int main()
{
    int n,arr[100],count=0,sum=0,s,i;
    printf("\n---------THIS IS SEARCHING ELEMENT IN ARRAY-----------");
    printf("\n enter the limits : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n enter the searching element : ");
    scanf("%d",&s);

    for(i=0; i<n; i++)
    {
        if(arr[i]==s)
            printf("the index of the element is : %d",i);
    }
    }
