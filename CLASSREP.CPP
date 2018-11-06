#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class Report{
	     private:
		     int adno;
		     char name[20];
		     float marks[5];
		     float average;
		     float getavg()
		     { return(marks[0]+marks[1]+marks[2]+marks[3]+marks[4]);}

	     public:
		    void readinfo();
		    void displayinfo();

	     };

	void Report::readinfo()
	{
	  cout<<"Enter admission no, name .marks in 5 subjects";
	  cin>>adno;
	  gets(name);
	  for(int i=0;i<5;i++)
	    cin>>marks[i];
	    average=getavg();
	  }
	  void Report::displayinfo()
	  { cout<<"Admission no:"<<adno<<endl;
	  cout<<"Name:"<<name<<endl;
	  cout<<"Marks in 5 subjects are :"<<endl;
	  cout<<marks[0]<<' '<<marks[1]<<' '<<marks[2]<<' '<<marks[3]<<' '<<marks[4]<<endl;
	  cout<<"Average marks:"<<average<<endl;
	  }
	  void main()
	  {  clrscr();
	  Report r;
	  r.readinfo();
	  r.displayinfo();
	  getch();
	  }
