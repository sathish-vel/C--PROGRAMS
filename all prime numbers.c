#include<stdio.h>
#include<conio.h>
int main()
{
    int Snum,Enum,i,j,count=0;
    printf("\n enter the Starting number : ");
    scanf("%d",&Snum);
    printf("\n enter the Ending number : ");
    scanf("%d",&Enum);
    for(i=Snum; i<=Enum; i++)
    {
        count=0;
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
