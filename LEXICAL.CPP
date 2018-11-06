#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
 {
	clrscr();
	int index_x,index_y,size;
	char name[50][30];
	cout<<"Enter no. of names(max 50) = ";
	cin>>size;
	cout<<"Enter names :- \n";
	for(index_x=0;index_x<size;index_x++)
	 {
		cout<<index_x+1<<".> Name :- ";
		gets(name[index_x]);
	 }
	cout<<"Names without sorting - \n";
	for(index_x=0;index_x<size;index_x++)
	 {
		cout<<"\t\t\t"<<index_x+1<<".> Name :- "<<name[index_x]<<endl;
	 }
	int check;
	char *chng;
	cout<<"Names in sorted form - \n";
	for(index_x=0;index_x<size;index_x++)
	 {
		for(index_y=0;index_y<size-1;index_y++)
		 {
			check=strcmp(name[index_y],name[index_y+1]);
			if(check>0)
			 {
				strcpy(chng,name[index_y]);
				strcpy(name[index_y],name[index_y+1]);
				strcpy(name[index_y+1],chng);
			 }
		 }
	 }
	for(index_x=0;index_x<size;index_x++)
	 {
		cout<<"\t\t\t"<<index_x+1<<".> Name :- "<<name[index_x]<<endl;
	 }
	getch();
 }