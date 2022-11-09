#include<stdio.h>
#include<conio.h>
void main()
{
    int num,temp,h;
    while(num<100)
    {
        temp=num;
        int flag=1;
        while(temp>10)
        {
            h=temp%10;
           temp=temp/10;
            if(h==3||h==4)
               flag=0;
        }
        if((temp==3||temp==4)&&flag==1)
        {
            printf("\n%d",num);
        }
        num++;
    }

}
