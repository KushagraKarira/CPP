#include<fstream.h>
#include<conio.h>
#include<stdio.h>h
struct contestant
{
   char name[30];
   char fname[50];
   char mname[50];
   char caste[10];
   int age;
   char personlty[10];
public:
void getdata();
}x;
void main()
{
clrscr();
contestant *ptr;
ptr=&x;
cout<<"Enter Name=>";
gets(ptr->name);
cout<<"Enter Father's Name=>";
gets(ptr->fname);
cout<<"Enter Mother's Name=>";
gets(ptr->mname);
cout<<"Enter Caste=>";
gets(ptr->caste);
cout<<"Personality (Good/Better/Best)=>";
gets(ptr->personlty);
cout<<"Enter Age=";
cin>>ptr->age;
if(x.age>=21)
{
cout<<"Congrats! You are eligible for registration...";
}
else
{
cout<<"Oops! Something went wrong...Please try again later...";
}
getch();
}
