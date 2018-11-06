#include<iostream.h>
#include<stdio.h>
#include<conio.h>
struct clas
{
int rno;
char name;
double total;
}clas;
main()
{
int stren;
clrscr();
cout<<"Enter Class strength : ";
cin>>stren;
cout<<"RNO : ";
cin>>clas.rno;
cout<<"Name : ";
cin>>clas.name;
cout<<"Total marks : ";
cin>>clas.total;
cout<<clas.rno<<endl<<clas.name<<endl<<clas.total;
getch();
return 0;
}
