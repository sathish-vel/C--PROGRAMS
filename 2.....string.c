#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum=0,count=0;
    char name[100],ch;

    printf("\n enter the character : ");
    scanf("%c",&ch);
    printf("\n enter the number : ");
    scanf("%d",&n);
    printf("\n enter the name : ");
    scanf("%s",&name);
    printf("\n%d",ch);
    printf("\n%c",n);

    asciiOfString(name);

    return 0;
}
int asciiOfString(char name[])
{
   int i;
   for(i=0;name[i]!='\0';i++)
    {
        printf("\n%d  ",name[i]);
    }
}



