#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum=0,count=0,lenth,lenth1;
    char name[100],name1[100],name2[100],ch;
    printf("\n enter the name : ");
    scanf("%s",&name);
    lenth=strlen(name);
    reverse(name,lenth);
    copyString(name,lenth);
    printf("\n enter a number : ");
    scanf("%d",&n);
    numberIntoWords(n);
    printf("\n enter the first name : ");
    scanf("%s",&name1);
    printf("\n enter the second name : ");
    scanf("%s",&name2);
    lenth1=strlen(name1);
    compareString(name1,name2,lenth1);
    countTheD_A_S(name);
    vowels(name);


    return 0;
}
int reverse(char name[],int lenth)
{
    int i;
    for(i=lenth-1; i>=0; i--)
    {
        printf("\n%c",name[i]);
    }
}
int copyString( char name[],int lenth)
{
    int i,j=3;
    char new[100];
    for (i=0; name[i]!='\0'; i++)
    {
        new[i]=name[i];
        new[i]='\0';

        printf("\n%c",new[i]);
    }
    printf("\n %s",new);
}
int numberIntoWords(int n)
{
    int i,rem,sum=0;
    while(n>0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n/=10;
    }
    rem=0;
    while(sum>0)
    {
        rem=sum%10;
        switch(rem)
        {
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
        case 0:
            printf("zero");
            break;
        default:
            printf("enter the correct number : ");
        }
        sum/=10;
    }
}
int compareString(char name1[],char name2[],int lenth1)
{
    int i,count=0;
    for (i=0; name1[i]!='\0'; i++)
    {
        if(name1[i]==name2[i])
        {
            count++;
        }
    }
    if(count==lenth1)
    {
        printf("\n strings are equal......");
    }
    else
    {
        printf("\n strings are not equal..... ");
    }
}
int countTheD_A_S(char name[])
{
    int i,alphabet=0,spl=0,number=0;
    for(i=0; name[i]!='\0'; i++)
    {
        if(name[i]>='0' && name[i]<='9')
        {
            number++;
        }
        if(name[i]>='a' && name[i]<='z' || name[i]>='A' && name[i]<='Z')
        {
            alphabet++;
        }
        else
        {
            spl++;
        }
    }
    printf("\n the total Number is : %d",number);
    printf("\n the total Alphabet is : %d",alphabet);
    printf("\n the total Special character is : %d",spl);
}

int vowels(int name[])
{
    int i,count=0,count1=0;
    for(i=0; name[i]!='\0'; i++)
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
        {
            count++;
            printf("%c ",name[i]);
        }
        else
        {
            count1++;
            printf("%c",name[i]);
        }
    }
}


