#include<stdio.h>
#include<conio.h>
void main()
{
    int num,mrk[100],i=0,j,sum=0,result=0;
    char gen;
    printf("\n enter the Gender :");
    scanf("%c",&gen);
    printf("\n enter the number of students : ");
    scanf("%d",&num);
    printf("\n enter the students marks : \n");
    for(i=0; i<num; i++)
    {
        scanf("%d",&mrk[i]);
    }

    if(gen=='b')
    {
        for(i=0; i<num; i++)
        {
            if(i%2==0)
            {
                sum=sum+mrk[i];
            }
        }
        printf("\n%d",sum);
    }
    else if (gen=='g')
    {
        for(i=1; i<num;)
        {
            result=result+mrk[i];
            i=i+2;
        }
        printf("\n%d",result);
    }
    else{
        printf("\n invalid ");
    }
}
