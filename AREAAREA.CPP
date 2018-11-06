#include<iostream.h>
#include<conio.h>
float carea(float rad);
float rarea(float len,float brt);
float tarea(float len,float bas,float ht);

void main()
{
const float pi=3.1415;
float carea,rarea,tarea,len,bas,ht,brt,rad;
int ch;
clrscr();
cout<<"\n\t\t\t\t  menu=";
cout<<"\n1. carea=";
cout<<"\n2. rarea=";
cout<<"\n3. tarea=";
cout<<"enter your choice=";
cin>>ch;
switch(ch)
{
case 1:
cout<<"enter rad=";
cin>>rad;
carea=pi*(rad*rad);
cout<<carea;
break;
case 2:
cout<<"enter len,brt=";
cin>>rarea;
cin>>len,brt;
rarea=len*brt;
cout<<rarea;
break;
case 3:
cout<<"enter len,bas,ht=";
cin>>tarea;
cin>>len,bas,ht;
tarea=len*bas*ht;
cout<<tarea;
}
getch();
}



