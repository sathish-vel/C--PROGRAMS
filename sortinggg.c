#include<stdio.h>
#include<conio.h>
int main()
{
    int n,arr[100],count=0,sum=0,s,i,j,temp;
    printf("\n enter a limits : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

      for(i=0; i<n; i++)
    {
        printf("%d",arr[i]);
    }
}

