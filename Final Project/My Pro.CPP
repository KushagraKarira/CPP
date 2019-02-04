//***************************************************************
//                   HEADER FILE USED IN PROJECT
//****************************************************************

#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<iomanip.h>

//***************************************************************
//                   CLASS USED IN PROJECT
//****************************************************************



class book
{
	char bno[6];
	char bname[50];
	char aname[20];
  public:
	void create_book()
	{
		cout<<"\n... NEW BOOK ENTRY ...\n";
		cout<<"\nEnter book no.";
		cin>>bno;
		cout<<"\n\nEnter Name of Book ";
		gets(bname);
		cout<<"\n\nEnter Author's Name ";
		gets(aname);
		cout<<"\n\n\n >> Book Created";
	}

	void show_book()
	{
		cout<<"\nBook no. : "<<bno;
		cout<<"\nBook Name : ";
		puts(bname);
		cout<<"Author Name : ";
		puts(aname);
	}

	void modify_book()
	{
		cout<<"\nBook no. : "<<bno;
		cout<<"\nModify Book Name : ";
		gets(bname);
		cout<<"\nModify Author's Name of Book : ";
		gets(aname);
	}

	char* retbno() { return bno; }

	void report() { cout<<bno<<setw(30)<<bname<<setw(30)<<aname<<endl; }


};         //class ends here


class student
{
	char admno[6];
	char name[20];
	char stbno[6];
	int token;
public:
	void create_student()
	{
		clrscr();
	 	cout<<"\n... NEW STUDENT ENTRY ...\n";
		cout<<"\nEnter admission no. ";
		cin>>admno;
		cout<<"\n\nEnter Name of Student ";
		gets(name);
		token=0;
		stbno[0]='/0';
		cout<<"\n\nStudent Record Created..";
	}

	void show_student()
	{
		cout<<"\nAdmission no. : "<<admno;
		cout<<"\nStudent Name : "<<name;
		cout<<"\nNo of Book issued : "<<token;
		if(token==1)
		cout<<"\nBook No "<<stbno;
	}

	void modify_student()
	{
		cout<<"\nAdmission no. : "<<admno;
		cout<<"\nModify Student Name : ";
		gets(name);
	}

	char* retadmno() { return admno; }

	char* retstbno() { return stbno; }

	int rettoken() { return token; }

	void addtoken() { token=1; }

	void resettoken() { token=0; }

	void getstbno(char t[]) { strcpy(stbno,t); }

	void report() { cout<<"\t"<<admno<<setw(20)<<name<<setw(10)<<token<<endl; }

};         //class ends here




//***************************************************************
//    	GLOBAL DECLARATION : STREAM OBJECT, OBJECT
//****************************************************************

fstream fp,fp1;
book bk;
student st;


//***************************************************************
//    	FUNCTION WRITE TO FILE
//****************************************************************

void write_book()
{
	char ch;
	fp.open("book.dat",ios::out|ios::app);
	do
	{
		clrscr();
		bk.create_book();
		fp.write((char*)&bk,sizeof(book));
		cout<<"\n\nDo you want to add more records ?(Y/N)";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	fp.close();
}

void write_student()
{
	char ch;
	fp.open("student.dat",ios::out|ios::app);
	do
	{
		st.create_student();
		fp.write((char*)&st,sizeof(student));
		cout<<"\n\ndo you want to add more records ? (Y/N)";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	fp.close();
}


//***************************************************************
//    	FUNCTION READ SPECIFIC RECORD FROM FILE
//****************************************************************


void display_spb(char n[])
{
	cout<<"\nBOOK DETAILS\n";
	int flag=0;
	fp.open("book.dat",ios::in);
	while(fp.read((char*)&bk,sizeof(book)))
	{
		if(strcmpi(bk.retbno(),n)==0)
		{
			bk.show_book();
		 	flag=1;
		}
	}
	
	fp.close();
	if(flag==0)
		cout<<"\n\nBook does not exist";
	getch();
}

void display_sps(char n[])
{
	cout<<"\nSTUDENT DETAILS\n";
	int flag=0;
	fp.open("student.dat",ios::in);
	while(fp.read((char*)&st,sizeof(student)))
	{
		if((strcmpi(st.retadmno(),n)==0))
		{
			st.show_student();
			flag=1;
		}
	}
	
	fp.close();
	if(flag==0)
    		cout<<"\n\nStudent does not exist";
 	getch();
}


//***************************************************************
//    	FUNCTION TO MODIFY RECORD OF FILE
//****************************************************************


void modify_book()
{
	char n[6];
	int found=0;
	clrscr();
	cout<<"\n\n\tMODIFY BOOK REOCORD.... ";
	cout<<"\n\n\tEnter The book no. of The book";
	cin>>n;
	fp.open("book.dat",ios::in|ios::out);
	while(fp.read((char*)&bk,sizeof(book)) && found==0)
	{
		if(strcmpi(bk.retbno(),n)==0)
		{
			bk.show_book();
			cout<<"\nEnter The New Details of book"<<endl;
			bk.modify_book();
			int pos=-1*sizeof(bk);
		    	fp.seekp(pos,ios::cur);
		    	fp.write((char*)&bk,sizeof(book));
		    	cout<<"\n\n\t Record Updated";
		    	found=1;
		}
	}

    	fp.close();
    	if(found==0)
    		cout<<"\n\n Record Not Found ";
    	getch();
}


void modify_student()
{
	char n[6];
	int found=0;
	clrscr();
	cout<<"\n\n\tMODIFY STUDENT RECORD... ";
	cout<<"\n\n\tEnter The admission no. of The student";
	cin>>n;
	fp.open("student.dat",ios::in|ios::out);
	while(fp.read((char*)&st,sizeof(student)) && found==0)
	{
		if(strcmpi(st.retadmno(),n)==0)
		{
			st.show_student();
			cout<<"\nEnter The New Details of student"<<endl;
			st.modify_student();
			int pos=-1*sizeof(st);
			fp.seekp(pos,ios::cur);
			fp.write((char*)&st,sizeof(student));
			cout<<"\n\n\t Record Updated";
			found=1;
		}
	}
	
	fp.close();
	if(found==0)
		cout<<"\n\n Record Not Found ";
	getch();
}


//***************************************************************
//    	FUNCTION TO DISPLAY ALL STUDENTS LIST
//****************************************************************

void display_alls()
{
	clrscr();
     	fp.open("student.dat",ios::in);
     	if(!fp)
     	{
       		cout<<"ERROR!!! FILE COULD NOT BE OPEN ";
       		getch();
       		return;
     	}

	cout<<"\n\n\t\tSTUDENT LIST\n\n";
	cout<<"==================================================================\n";
	cout<<"\tAdmission No."<<setw(10)<<"Name"<<setw(20)<<"Book Issued\n";
	cout<<"==================================================================\n";

	while(fp.read((char*)&st,sizeof(student)))
	{
		st.report();
	}
     	
	fp.close();
	getch();
}


//***************************************************************
//    	FUNCTION TO DISPLAY BOOKS LIST
//****************************************************************

void display_allb()
{
	clrscr();
	fp.open("book.dat",ios::in);
	if(!fp)
	{
		cout<<"ERROR!!! FILE COULD NOT BE OPEN ";
       		getch();
       		return;
     	}

	cout<<"\n\n\t\tBook LIST\n\n";
	cout<<"=========================================================================\n";
	cout<<"Book Number"<<setw(20)<<"Book Name"<<setw(25)<<"Author\n";
	cout<<"=========================================================================\n";

	while(fp.read((char*)&bk,sizeof(book)))
	{
		bk.report();
	}
     	fp.close();
     	getch();
}



//***************************************************************
//    	FUNCTION TO ISSUE BOOK
//****************************************************************

void book_issue()
{
	char sn[6],bn[6];
	int found=0,flag=0;
	clrscr();
	cout<<"\n\n... BOOK ISSUE ...";
	cout<<"\n\n\tEnter The student's admission no.";
	cin>>sn;
	fp.open("student.dat",ios::in|ios::out);
    	fp1.open("book.dat",ios::in|ios::out);
    	while(fp.read((char*)&st,sizeof(student)) && found==0)
       	{
		if(strcmpi(st.retadmno(),sn)==0)
		{
			found=1;
			if(st.rettoken()==0)
			{
		      		cout<<"\n\n\tEnter the book no. ";
				cin>>bn;
				while(fp1.read((char*)&bk,sizeof(book))&& flag==0)
				{
			   		if(strcmpi(bk.retbno(),bn)==0)
					{
						bk.show_book();
						flag=1;
						st.addtoken();
						st.getstbno(bk.retbno());
       						int pos=-1*sizeof(st);
						fp.seekp(pos,ios::cur);
						fp.write((char*)&st,sizeof(student));
						cout<<"\n\n\t Book issued successfully\n\n";
                                                cout<<"Submit within 7 days else Re 1 fine each day thereafter.";
					}
		    		}
		  		if(flag==0)
		    			cout<<"Book no does not exist";
			}
	    		else
		  		cout<<"You have not returned the last book ";

		}
	}
      	if(found==0)
		cout<<"Student record not exist...";
	getch();
  	fp.close();
  	fp1.close();
}

//***************************************************************
//    	FUNCTION TO DEPOSIT BOOK
//****************************************************************

void book_deposit()
{
    char sn[6],bn[6];
    int found=0,flag=0,day,fine;
    clrscr();
    cout<<"\n\n... BOOK DEPOSIT ...";
    cout<<"\n\n\tEnter The student's admission no.";
    cin>>sn;
    fp.open("student.dat",ios::in|ios::out);
    fp1.open("book.dat",ios::in|ios::out);
    while(fp.read((char*)&st,sizeof(student)) && found==0)
       {
	    if(strcmpi(st.retadmno(),sn)==0)
	    {
		    found=1;
		    if(st.rettoken()==1)
		    {
			while(fp1.read((char*)&bk,sizeof(book))&& flag==0)
			{
			   if(strcmpi(bk.retbno(),st.retstbno())==0)
			{
				bk.show_book();
				flag=1;
				cout<<"\n\nBook deposited in no. of days";
				cin>>day;
				if(day > 7)
				{
				   fine=(day-7)*1;
				   cout<<"\n\nFine has to deposited Rs. "<<fine;
				}
					st.resettoken();
					int pos=-1*sizeof(st);
					fp.seekp(pos,ios::cur);
					fp.write((char*)&st,sizeof(student));
					cout<<"\n\n\t Book deposited successfully";
			}
		    }
		  if(flag==0)
		    cout<<"Book no does not exist";
		      }
		 else
			cout<<"No book is issued.. Please check!!";
		}
	   }
      if(found==0)
	cout<<"Student record not exist...";
	getch();
  fp.close();
  fp1.close();
  }




//***************************************************************
//    	INTRODUCTION FUNCTION
//****************************************************************

void intro()
{
	clrscr();
	cout<<"\n\n\t L I B R A R Y   M A N A G M E N T   S Y S T E M ";
	cout<<"\n\n\t MADE BY : KUSHAGRA KARIRA";
        cout<<"\n\n\t MAIL ID : KushagraKarira@gmail.com";
	cout<<"\n\n\t  SCHOOL : MAHARANA MEWAR PUBLIC SCHOOL, Udaipur";
	getch();
}


//***************************************************************
//    	ADMINISTRATOR MENU FUNCTION
//****************************************************************

void admin_menu()
{
	clrscr();
	int ch2;
	cout<<"\n\n\n\tADMINISTRATOR MENU";
	cout<<"\n\n\t1.CREATE STUDENT RECORD";
	cout<<"\n\n\t2.DISPLAY ALL STUDENTS RECORD";
	cout<<"\n\n\t3.DISPLAY SPECIFIC STUDENT RECORD ";
	cout<<"\n\n\t4.MODIFY STUDENT RECORD";
	cout<<"\n\n\t5.CREATE BOOK ";
	cout<<"\n\n\t6.DISPLAY ALL BOOKS ";
	cout<<"\n\n\t7.DISPLAY SPECIFIC BOOK ";
	cout<<"\n\n\t8.MODIFY BOOK ";
	cout<<"\n\n\t9.BACK TO MAIN MENU";
	cout<<"\n\n\tPlease Enter Your Choice (1-11) ";
	cin>>ch2;
	switch(ch2)
	{
    		case 1: clrscr();
	    		write_student();break;
    		case 2: display_alls();break;
    		case 3:
	       		char num[6];
	       		clrscr();
	       		cout<<"\n\n\tPlease Enter The Admission No. ";
	       		cin>>num;
	       		display_sps(num);
	       		break;
      		case 4: modify_student();break;
		case 5: clrscr();
			write_book();break;
		case 6: display_allb();break;
		case 7: {
	       		char num[6];
	       		clrscr();
	       		cout<<"\n\n\tPlease Enter The book No. ";
	       		cin>>num;
	       		display_spb(num);
	       		break;
			}
      		case 8: modify_book();break;
     		case 9: return;
      		default:cout<<"\a";
   	}
   	admin_menu();
}


//***************************************************************
//    	THE MAIN FUNCTION OF PROGRAM
//****************************************************************


void main()
{
	char ch;
	intro();
	do
	{
		clrscr();
		cout<<"\n\n\n\t M A I N   M E N U";
		cout<<"\n\n\t01. BOOK ISSUE";
		cout<<"\n\n\t02. BOOK DEPOSIT";
	  	cout<<"\n\n\t03. ADMINISTRATOR MENU - TO EDIT RECORDS";
	  	cout<<"\n\n\t04. EXIT";
	  	cout<<"\n\n\tPlease Select Your Option (1-4) ";
	  	ch=getche();
	  	switch(ch)
	  	{
			case '1':clrscr();
				 book_issue();
			   	 break;
		  	case '2':book_deposit();
			    	 break;
		  	case '3':admin_menu();
				 break;
		  	case '4':exit(0);
		  	default :cout<<"\a";
		}
    	}while(ch!='4');
}

//***************************************************************
//    			END OF PROJECT
//***************************************************************
