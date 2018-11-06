#include<iostream.h>
#include<stdio.h>
#include<conio.h>
float rno,eng,math,ph,ch,cs;
char name;
int total=eng+math+ph+ch+cs;
int str;
#define size str
void disp();
void marks();
main()
{
clrscr();
cout<<" Enter Class Strength"<<endl;
cin>>str;
for (int i;i<size;i++)
{
cout<<" Enter Roll Number"<<endl;
cin>>rno;
cout<<" Enter Roll Number"<<endl;
cin>>rno;
cout<<" Enter Name"<<endl;
cin>>name;
cout<<" Enter Marks in English"<<endl;
cin>>eng;
cout<<" Enter Marks in Maths"<<endl;
cin>>math;
cout<<" Enter Marks in Physics"<<endl;
cin>>ph;
cout<<" Enter Marks in Chemistry"<<endl;
cin>>ch;
cout<<" Enter Marks in CS"<<endl;
cin>>cs;
}
marks();
disp();
getch();
return 0;
}
void disp()
{
cout<<"\t\t\t MARKS FOR CLASS XI"<<endl;
cout<<"| RNO  |   NAME   | English | Math | Physics | Chemistry | CS | Total |"<<endl;
for (int i;i<size;i++)
{
cout<<"| "<<rno<<" | "<<name<<" | "<<eng<<" | "<<math<<" | "<<ph<<" | "<<ch<<" | "<<cs<<" | "<<total<<" |"<<endl;
}
void marks()
{
char marks
if((total>=450)&&(total<=500))
marks=A;
if((total>=400)&&(total<=450))
marks=B;
if((total>=300)&&(total<=400))
marks=C;
if((total>=200)&&(total<=300))
marks=D;
if((total>=450)&&(total<=500))
marks=E;
}