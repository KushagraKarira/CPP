#include<iostream.h>
#include<conio.h>
void SORT();
int i,y,chng,num[50],size;
void main()
 {      clrscr();
	cout<<"Enter size = ";
	cin>>size;
	cout<<"\nEnter values = ";
	for(i=0;i<size;i++)
	 {
		cout<<"\nVAlue "<<i+1<<" = ";
		cin>>num[i];
	 }
	 SORT();
	getch();
 }
void SORT()
 {
      cout<<"\nSorted form -> \n";
	for(i=0;i<size;i++)
	 {
		for(y=0;y<size-1;y++)
		 {
			if(num[y]>num[y+1])
			 {
				chng=num[y];
				num[y]=num[y+1];
				num[y+1]=chng;
			 }
		 }
	 }
	for(i=0;i<size;i++)
	 {
		cout<<"\nValue = "<<num[i];
	 }
 }