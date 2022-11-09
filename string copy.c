#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    char name[100],
    copy[100];
    printf("\n enter a name : ");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        copy[i]=name[i];
    }
    printf("\n the copy of name is : %s",copy);
    return 0;
}
