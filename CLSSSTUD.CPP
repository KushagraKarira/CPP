#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class Student{
	       private: int admno;
			char sname[20];
			float english,maths,science;
			float total;
			float ctotal()

     { return english+maths+science;
     }
		public: void takedata()
		       {
		       cout<<"enter admission number"<<endl;
		       cin>>admno;
		       cout<<"enter student name"<<endl;
		       gets(sname);
		       cout<<"enter marks"<<endl;
		       cout<<"marks in english";
		       cin>>english;
		       cout<<"marks in maths :";
		       cin>>maths;
		       cout<<"marks in science"<<endl;
		       cin>>science;

     total=ctotal();
   }
   void showdata()
   {
     cout<<" admission no."<<admno<<endl;
  cout<< " student name:"<<sname<<endl;
   cout<<"marks in maths"<<maths<<endl;
   cout<<"marks in english"<<english<<endl;
   cout<<"marks in science"<<science<<endl;
   cout<<"total"<<total<<endl;
   };
    void create()
    {
	ofstream fout;
	fout.open("Student.DAT",ios::append)
	{
	s.get();
	fout.write()char


      };
       void main()
    {
       clrscr();
   s.takedata();
   s.showdata();
    getch();
       }
