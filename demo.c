#include<stdio.h>
#include<conio.h>
struct structure
{
    char name[20];
    char initial;
    int rollno;
    int age;
    char gender[100];
};
int main()
{
    struct structure s= {"satz",'s',2121,21,"male"};
    struct structure *p=&s;

    //strcpy(s.gender,"male");
    //printf("\n%s",s.gender);
    //printf("\n%s %c",p->name,p->initial);
    printf("\n%s %c",s.name);


    //printf("\n enter the Name,initial,Roll number,Age,Gender : ");
    //scanf("%s %c %d %d %s",&s.name,&s.initial,&s.rollno,&s.age,&s.gender);
    //printf("\n the name is :%s\n the initial is : %c\n the roll no is : %d\n the age is : %d\n the gender is : %s",s.name,s.initial,s.rollno,s.age,s.gender);

}
