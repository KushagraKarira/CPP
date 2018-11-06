#include<fstream.h>
#include<stdio.h>
#include<conio.h>
class CAR
 {
	private :
		 int Cno;
		 char Cname[20];
	public :
		void Get()
		 {
			cout<<"\nEnter Details : \n";
			cout<<"Car No. : ";
			cin>>Cno;
			cout<<"Car Name : ";
			gets(Cname);
		 }
		void Disp()
		 {
			cout<<"\nCar No. : "<<Cno;
			cout<<"\nCar Name : "<<Cname;
		 }
 } detail;
void ENTER()
 {
 ofstream fout ("car.dat",ios::app);
 char ch;
 do{
 cout<<"enter records :-"<<endl;
 detail.Get();
 fout.write((char*)&detail,sizeof (detail));
 cout<<"enter more records=";
 cin>>ch;
 }while(ch=='y');
 }
//CAR detail;
void main()
 {
	clrscr();
	ENTER();
	cout<<"Displaying Records Entered :\n";
	DISPLAY();
	getch();
 }
