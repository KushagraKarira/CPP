#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define size sno
int eng,math,phy,chm,cs;
#define total eng+math+phy+chm+cs
void grade();
main()
{
clrscr();
int sno;
cout<<"Enter class stength"<<endl;
cin>>sno;
for(int i;i<size;i++)
{cout<<"Hello"<<endl;}
getch();
return 0;
}
void grade()
{
char grade;
if ((total>=450) && (total<=500))
cout<<"A";
if ((total>=400) && (total<=450))
cout<<"B";
if ((total>=300) && (total<=400))
cout<<"C";
if ((total>=200) && (total<=300))
cout<<"D";
if (total<200)
cout<<"E";
}