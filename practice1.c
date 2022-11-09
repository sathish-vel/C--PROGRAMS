#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a,b,c,d;
    printf("\n enter a numbers : " );
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b && a>c  && a>d)
    {
        printf("\n %d is a largest number",a);
    }
    else if(b>a && b>c  && b>d)
    {
        printf("\n %d is a largest number",b);
    }
    else if(c>a && c>b  && c>d)
    {
        printf("\n %d is a largest number",c);
    }
    else{
                printf("\n %d is a largest number",d);

    }




}
