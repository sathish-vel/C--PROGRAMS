#include<stdio.h>
#include<conio.h>
void main()
{
    int i,k,j,n,temp,arr[20];
    printf("\n enter the size : ");
    scanf("%d",&n);
    printf("\n enter the elements : ");
    for(i=0; i<n; i++)
    {
        scanf("%d ",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n-2; j++)
        {
            if(arr[i]>arr[j])
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
