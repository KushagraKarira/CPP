#include<stdiostr.h>
#include<conio.h>
struct STUD
 {
	int rno;
	char name[50];
	int marks[5];
 }d;
void main()
 {      int total=0;
	clrscr();
	cout<<"Enter Name = ";
	gets(d.name);
	cout<<"\nEnter Roll No. = ";
	cin>>d.rno;
	cout<<"\nEnter marks -> \n";
	for(int i=0;i<5;i++)
	 {
		cout<<"Marks "<<i+1<<" = ";
		cin>>d.marks[i];
		total+=d.marks[i];
	 }
	cout<<"Grade of student = ";
	if(total>=420)
	cout<<'A';
	else if(total>=340)
	cout<<'B';
	else if(total>=280)
	cout<<'C';
	else
	cout<<'D';
	getch();
 }