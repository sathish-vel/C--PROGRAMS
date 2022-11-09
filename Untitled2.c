#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,sum=0,rem,a,b,count=0;
    char name[50];
    printf("\n enter a number :");
    scanf("%d",&n);
    palindrome(n);
    sumofdigits(n);
    factorial(n);
    armstrong_number(n);
    strong_number(n);
    /*printf("\n Swapping variable without using third variable ::")
    printf("\n enter the two number : ");
    scanf("%d%d",&a,&b);
    swap(a,b);*/
    Fodd_or_even(n);
    odd_or_even(n);
    printf("enter the name :");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        count++;
    }
    printf("%d",count);
}
int palindrome(int n)
{
    int i,j,sum=0,rem;
    while (n>0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    printf("the palindrome of number is :%d",sum);
}

int sumofdigits(int n)
{
    int i,j,sum=0,rem;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("\nThe sum of digits is :%d",sum);
}
int factorial(int n)
{
    int i,j,rem,fact=1;
    for (i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    printf("\n the factorial of number is : %d",fact);

}
int armstrong_number(int n)
{
    int i,j,sum=0,rem,result=0,dub=n,count=0;

    while(dub>0)
    {
        dub/=10;
        count++;
    }
    while(n>0)
    {
        rem=n%10;
        sum=1;
        for(i=1; i<=count; i++)
        {
            sum=sum*rem;
        }
        result=result+sum;
        n/=10;
    }
    printf("\n the arm strong number is : %d",result);

}
int strong_number(int n)
{
    int i,j,sum=0,rem,result=0,dub=n,count=0;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        int fact=1;
        for(i=1; i<=rem; i++)
        {
            fact=fact*i;
        }
        result=result+fact;
    }
    printf("\n the strong number is : %d",result);

}
int swap(int a,int b)
{
    printf("\nBefore swapping  a & b : %d  %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping  a & b : %d  %d",a,b);
}
int Fodd_or_even(n)
{
    if((n&1)==0)
    {
        printf("\n even number. ");
    }
    else
    {
        printf("\n odd number. ");
    }
}
int odd_or_even(n)
{
    if(n%2==0)
    {
        printf("\n evennnnnnn");
    }
    else{
        printf("\n odd number. ");
    }
}


