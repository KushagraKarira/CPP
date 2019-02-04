/* Wap to create a binary file and write objects of class WORKER to it and display worker details on screen after reading from the binary file. */
  
#include<fstream.h> 
#include<conio.h>
class WORKER { char Wname[20];
	       int Wno;
	       int HRWK; // Hours work
	       float wgrate; // wage rate
	       float totwage;
	       float calcwage (int HRWK, float wgrate)
		  {
			totwage=HRWK*wgrate;
			return totwage;
		  }
	       public:
	       WORKER ()
	       	{
		 	Wno=1;
		 	wgrate = 500;
		 	HRWK =5;
	      	 }
	       void INDATA();
	       void OUTDATA();
	     };
void WORKER::INDATA ()
{
   cout<<"\n\n\nEnter Worker's name : ";
   cin.get();
   cin.getline(Wname,80);
   cout<<"\n\nEnter worker Number : ";
   cin>>Wno;
   cout<<"\n\nEnter wage rate of worker : ";
   cin>>wgrate;
   cout<<"\n\nEnter hours work : ";
   cin>>HRWK;
}

void WORKER :: OUTDATA()
{
   cout<<"\n\nWorker's name => "<<Wname;
   cout<<"\n\nWorker number => "<<Wno;
   cout<<"\n\n\nWage rate = "<<wgrate;
   cout<<"\n\nHours Work = "<<HRWK;
   cout<<"\n\nTotal Wage = "<<calcwage (HRWK,wgrate);
}

void main()
{
clrscr();
int n;
l:
cout<<"\n\nEnter the total number of workers : "; cin>>n;
if(n<=0)
    {
	cout<<"\n\nEnter again. ";
	goto l;
    }
WORKER w[80],z[80];
fstream o;

for(int i=0; i<n; i++)
    {

	w[i].INDATA();
	o.open("www.dat",ios::binary|ios::out);
	o.write((char*)&w[i],sizeof(w[i]));
	o.close();

	o.open("www.dat",ios::binary|ios::in);
	o.read((char*)&z[i],sizeof(z[i]));
	o.close();
    }

cout<<"\n\n\n\n--------------------------------------------------- # Worker Details # --------------------------------------------------------";
for(i=0; i<n; i++)
    {
	w[i].OUTDATA();
	cout<<"\n\n";
    }

getch();
}

//Output:

//Enter the total number of workers : 2

//Enter Worker's name : Shivam
//Enter worker Number : 1
//Enter wage rate of worker : 120
//Enter hours work : 5

//Enter Worker's name : Gopal
//Enter worker Number : 2
//Enter wage rate of worker : 150
//Enter hours work : 8

//--------------------------------------------------------------- # Worker Details # ------------------------------------------------------------------

//Worker's name => Shivam
//Worker number => 1
//Wage rate = 120
//Hours Work = 5
//Total Wage = 600

//Worker's name => Gopal
//Worker number => 2
//Wage rate = 150
//Hours Work = 8
//Total Wage = 1200
