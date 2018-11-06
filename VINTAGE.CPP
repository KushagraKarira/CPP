#include<fstream.h>
#include<stdio.h>
#include<conio.h>
class VINTAGE
 {
	private :
		 int VNO;
		 char VDesc[20];
		 float Price;
	public :
		void GET()
		 {
			cin>>VNO;
			gets(VDesc);
			cin>>Price;
		 }
		void VIEW()
		 {
			cout<<VNO<<" : "<<VDesc<<" : "<<Price<<" .\n";
		 }
		float ReturnPrice()
		 {
			return Price;
		 }
 };
VINTAGE car;
void WRITE()
 {
	ofstream fout("VINTAGE.DAT",ios::app);
	char ch;
	do{
		cout<<"Enter Records :-\n";
		car.GET();
		fout.write((char *)&car,sizeof(car));
		cout<<"Enter more records (y/n) :- ";
		cin>>ch;
	 }while(ch=='y'||ch=='Y');
	fout.close();
 }
void Vintage()
 {
	ifstream fin("VINTAGE.DAT");
	fin.read((char *)&car,sizeof(car));
	while(fin)
	 {
		if(car.ReturnPrice()>200000 && car.ReturnPrice()<250000)
		car.VIEW();
		fin.read((char *)&car,sizeof(car));
	 }
	fin.close();
 }
void main()
 {
	clrscr();
	WRITE();
	Vintage();
	getch();
 }