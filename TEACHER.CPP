#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class teacher
{
private:
char name[20],sub[10];
float basic,da,hra,salary;
float calcsal()
{
salary=basic+da+hra;
return salary;
}
public:
void readdata()
{
cout<<"enter name=";
gets(name);
cout<<"enter sub=";
gets(sub);
cout<<"enter basic=";
cin>>basic;
cout<<"enetr da=";
cin>>da;
cout<<"enter hra=";
cin>>hra;
salary=calcsal();
}
void dispdata()
{
cout<<"name="<<name<<endl;
cout<<"subject="<<sub<<endl;
cout<<"basic="<<basic<<endl;
cout<<"da="<<da<<endl;
cout<<"hra="<<hra<<endl;
cout<<"salary="<<salary<<endl;
}
}t;
void main()
{
clrscr();
t.readdata();
t.dispdata();
getch();
}
