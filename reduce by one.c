#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("\n enter a number : ");
    scanf("%d",&num);
    while(num>1)
    {
        if(num%2==0)
        {
            num=num/2;
        }
        else{
            num--;
        }
    }
    printf("\n %d",num);


}
