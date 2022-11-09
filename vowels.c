#include<stdio.h>
#include<conio.h>
void main()
{
    char n;
    printf("\n Enter a number : ");
    scanf("%c",&n);
    switch(n)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c it is a vowels",n);
        break;
    default:
        printf("%c it is not a vowels",n);
        break;

    }
}
