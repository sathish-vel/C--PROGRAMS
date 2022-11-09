#include<stdio.h>
#include<conio.h>
int main()
{
    int i,length=0;
    char num[100];
    printf("\n enter a number : ");
    gets(num);
    for(i=0; num[i]!='\0'; i++)
    {
        length++;
    }
    printf("\n %s the Number of length is : %d\n",num,length);
    for(i=0; num[i]!='\0'; i++)
    {
        if(num[i]<='5')
        {
            printf("0 ");
        }
        else
        {
            printf("1 ");

        }
    }
    return 0;
}
