#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct student
 {
	int mark[5];
	int rno;
	char name[20];
	int clss;
 }detail;
void main()
 {
	clrscr();
	cout<<"Enter details of student -> \n";
	cout<<"Name -> ";
	gets(detail.name);
	cout<<"Class -> ";
	cin>>detail.clss;
	cout<<"Roll no. -> ";
	cin>>detail.rno;
	cout<<"Marks of subjects ->\n";
	cout<<"Physics -> ";
	cin>>detail.mark[0];
	cout<<"Math -> ";
	cin>>detail.mark[1];
	cout<<"Chemistry -> ";
	cin>>detail.mark[2];
	cout<<"C.S. -> ";
	cin>>detail.mark[3];
	cout<<"English -> ";
	cin>>detail.mark[4];
	getch();
 }
