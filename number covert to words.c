#include<stdio.h>
#include<conio.h>
void main()
{
    int num,sum=0,ld,input=0;
    printf("\n enter a number : ");
    scanf("%d",&num);
    while(num>0)
    {
        ld=num%10;
        sum=sum*10+ld;
        num=num/10;
    }
    num=sum;
    while(num>0)
    {
        input=num%10;
        switch(input)
        {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
        case 0:
            printf("zero");
            break;
        default:
            printf("ttt");
            break;
        }
        num=num/10;
    }





}
