#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
class tourist
{
private:
int carno;
char origin[20];
char des[20];
char type;
int dist;
int charge;
public:
void input()
{
cout<<"enter car no.\n ";
cin>>carno;
cout<<"\nenter orign\n";
gets(origin);
cout<<"\nenter destination\n";
gets(des);
cout<<"enter type";
cin>>type;
cout<<"enter distance";
cin>>dist;
if(type=='e')
charge=16*dist;
else if(type=='a')
charge=22*dist;
else if(type=='l')
charge=30*dist;
}
void display()
{
cout<<carno<<endl;
cout<<origin<<endl;
cout<<des<<endl;
cout<<type<<endl;
cout<<dist<<endl;
cout<<charge<<endl;
}
};
void main()
{
clrscr();
tourist t;
t.input();
t.display();
getch();
}
