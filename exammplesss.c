#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,sum=0,rem,a,b,count=0;
    char name[50],arr[100];
    printf("enter the name :");
    gets(name);
    j=4;
    for(i=0;name[i]!='\0';i++)
    {
        arr[j]=name[i];
        count++;
        j--;
    }
    printf("%d",count);
    printf("%s",arr);



    return 0;
}
