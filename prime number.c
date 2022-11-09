#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i=1,count=0;
    printf("\n enter the number : ");
    scanf("%d",&num);
    //for(i=2; i<=num; i++)
    while(num>=i)
    {
        if(num%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==2)
    {
        printf("%d is a prime number",num);

    }
    else
    {
        printf("%d is not a  prime number",num);

    }
    return 0;
}
