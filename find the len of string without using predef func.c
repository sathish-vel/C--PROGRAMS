#include<stdio.h>
#include<conio.h>
int main()
{
    int length=0,i;
    char name[100];
    printf("\n enter a name : ");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        length++;
    }
    printf("\n %s the length is : %d",name,length);
    return 0;
}
