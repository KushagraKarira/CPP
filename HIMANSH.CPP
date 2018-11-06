#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
class bloodbank
{
	private:
	char c_name[30];
	int dob;
	char  c_phone_no[15];
	char bloodgroup[30];

public:
void enter()
{
	cout<<"enter the name "<<endl;
	gets(c_name);
	cout<<"enter the date of birth "<<endl;
	cin>>dob;
	cout<<"enter the blood group"<<endl;
	cin>>bloodgroup;
	cout<<"enter the phone number "<<endl;
	gets(c_phone_no);
}
void view()
{
	cout<<"name"<<c_name<<endl;
	cout<<"date of birth"<<dob<<endl;
	cout<<"blood group"<<bloodgroup<<endl;
	cout<<"phoneno. "<<c_phone_no<<endl;
}
};
float b;
void WRITE()
 {
	ofstream fout("bloodbank.DAT",ios::app);
	char ch;
	do{
		cout<<"Enter Records :-\n";
		b.enter();
		fout.write((char *)&b,sizeof(b));
		cout<<"Enter more records (y/n) :- ";
		cin>>ch;
	 } while(ch=='y'||ch=='Y');
	fout.close();
 }

void main()
       {
	clrscr();
	WRITE();
	view();
	getch();
	}














