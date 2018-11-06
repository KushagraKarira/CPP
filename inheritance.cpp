/* WAP in C++ to display the information of a student and calculate his grade using the class inheritance */

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
Class person{ char name[21];  int age;
	          public:
	      void indata()
	      {	cout<<"\n\nEnter the name of Student: " ;
	       	gets(name);
	       	cout<<"\n\nEnter the age : ";
	       	cin>>age;
	      }
	      void outdata()
	      {	   cout<<"\n\n";
		    for(int i=0; i<79; i++)
		    cout<<"-";
		    cout<<"\n\nName of the student is: "<<name;
		    cout<<"\n\nAge of the student is : "<<age;
	      }
	};
class student: public person
  { float Tmarks;
    int rollno;
    public:
    char calgrade()
    {if(Tmarks>90)
     return 'A';
     else if(Tmarks>80&&Tmarks<=90)
     return 'B';
     else if(Tmarks>70&&Tmarks<=80)
     return 'C';
     else if(Tmarks>60&&Tmarks<=70)
     return 'D';
     else
     return 'E';
   }

    void enter()
    {    	 cout<<"\n\nEnter the roll number: "; cin>>rollno;
    	cout<<"\n\nEnter total marks (out of 100) : ";
    	cin>>Tmarks;
    }
    void display()
    {	cout<<"\n\nRoll number : "<<rollno;
     	cout<<"\n\nTotal marks are : "<<Tmarks;
     	cout<<"\n\nGrade = "<<calgrade();
    }
};
void main()
{ clrscr();
student A;
 A.indata();
 A.enter();
 A.outdata();
 A.display();
getch();
}


Output:

Enter the name of Student: Rahul Verma

Enter the age : 16

Enter the roll number: 34

Enter total marks (out of 100) : 92

-------------------------------------------------------------------------------

Name of the student is: Rahul Verma

Age of the student is : 16

Roll number : 34

Total marks are : 92

Grade = A
