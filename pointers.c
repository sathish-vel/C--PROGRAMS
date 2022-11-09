#include<stdio.h>
#include<conio.h>
int main()
{
    int n=50;
    int*p,**p1;//we can declare of one line like this :int n=50,*p=&n
    p=&n;
    *p=10;
    p1=&p;
    char c='o',*cp=&c;

    //printf("enter the numbers :\n ");
    //scanf("%d",&n);
    printf("\n%d",&n);
    printf("\n%d",p);
    printf("\n%d",&p);
    printf("\n%d",*p);
    printf("\n%d",**p1);
    printf("\n%c",*cp);
    printf("\n%d",*cp);

}
