#include<stdio.h>
#include<conio.h>
void main()
{


int m1,m2,m3,m4,m5,total,avr;
printf("\n Enter a 5 subject marks : ");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
total=m1+m2+m3+m4+m5;
avr=total/5;
printf("\n the total marks is : %d",total);
printf("\n the average is : %d",avr);
if(m1>=35 && m2>=35 && m3>=35 && m4>=35 && m5>=35)
{
      printf("\n the result is pass ");
}
else
{
        printf("\n the result is fail ");
}
 if(avr >=90 && avr <=100)
{
    printf("\n the Grade is : A ");

}
else if(avr >=80 && avr <=89)
{
    printf("\n the Grade is : B ");

}
else if(avr >=70 && avr <=79)
{
    printf("\n the Grade is : C ");

}
else if(avr <=70)
{
    printf("\n the Grade is : D ");
}
else
{
        printf("\n No Grade : fail ");

}

}
