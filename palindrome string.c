#include<stdio.h>
#include<conio.h>
void main()
{
    int i,count=0,count_1=0,j=0;
    char str[100],dub[100],new[100];
    printf("\n enter a name : ");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        count++;
        dub[i]=str[i];
    }
    printf("\n %d",count);
    printf("\n the dublicate array is : %s ",dub);
    for(i=count-1; i>=0; i--)
    {
        new[j]=str[i];
        printf("%c",new[j]);
        j++;
    }
    printf("\n the new array is : %s ",dub);

    for(i=0; str[i]!='\0'; i++)
    {
        if( new[i]==dub[i])
            count_1++;
    }
    if(count==count_1)
    {
        printf("\n%s is a palindrome string ",dub);
    }
    else
    {
        printf("\n%s is not a palindrome string ",dub);

    }
}



