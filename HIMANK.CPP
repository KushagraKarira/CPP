#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>

class student
{
	private:
		int admno;
		char Sname[20];
		float eng,math,science;
		float total;
		float ctotal()
		{
			return eng+math+science;
		}
	public:

	       void takedata()
		{

			cout<<"Enter student's adm. no : "<<endl;
			cin>>admno;
			cout<<"Enter student name : "<<endl;
			gets(Sname);
			cout<<"Enter marks of english subject : "<<endl;
			cin>>eng;
			cout<<"Enter marks of math subject : "<<endl;
			cin>>math;
			cout<<"Enter marks of science subject : "<<endl;
			cin>>science;
		}

		void showdata()
		{
			cout<<"Student's adm. no : "<<admno;
			cout<<"\n student's name : ";
			puts(Sname);
			cout<<"\n Marks of english subject : "<<eng;
			cout<<"\n Marks of math subject : "<<math;
			cout<<"\n Marks of science subject : "<<science;
		 }

}s;


	void ENTER()
	{
		ofstream fout;
		fout.open("Students");
		char ch ;
		while( ch == 'y'|| ch == 'Y')
		{
			fout.write( (char*)& s, sizeof(s)) ;
			s.takedata();
			cout<<"Do you want to enter more records??";
			cin>>ch;
		}

		fout.close();
	}

	void SHOW()
	{
	       ifstream fin;
	       fin.open("Students");
	       s.showdata();
	}

void main()
{
	clrscr();
	ENTER();
	SHOW();
	getch();
}





