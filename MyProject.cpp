/*----------------------------  Library Managment System --------------------*/
/*
Work In Progress :
1.Delete Unused File Pointers
2.Move Functions out of class
*/
/* HEADER FILE USED IN PROJECT */
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<iomanip.h>

/*-------Function declaration---------*/
void write_book(); //Write to book
void write_student(); //Write to student
void display_spb(char n[]); //Display book
void display_sps(char n[]); //Display student
void modify_book(); //Modify book record
void modify_student(); //Modify student record
void display_alls(); //Display all students
void display_allb(); //Display all books
void book_issue(); //Issue book
void book_deposit(); //Deposit and fine
void admin_menu(); //Administrator menu
void intro(); // intro

/*------------- Class defination -------------*/
struct book
{
	char bno[6];
	char bname[50];
	char aname[20];

	void create_book()
	{
		cout<<"\n...NEW BOOK ENTRY...\n";
		cout<<"\nEnter book no. : ";
		cin>>bno;
		cout<<"\n\nEnter Name of The Book : ";
		gets(bname);
		cout<<"\n\nEnter Author's Name : ";
		gets(aname);
		cout<<"\n\n\n[ Book Created ]";
	}

	void show_book()
	{
		cout<<"\n Book no. : "<<bno;
		cout<<"\n Book Name : "<<bname;
		cout<<"\n Author Name : "<<aname;
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
};

struct student
{
	char admno[6];
	char name[20];
	char stbno[6];
	int token;

	void create_student()
	{
		clrscr();
		cout<<"\n...NEW STUDENT ENTRY...\n";
		cout<<"\nEnter admission no. : ";
		cin>>admno;
		cout<<"\n\nEnter Name of The Student : ";
		gets(name);
		token=0;
		stbno[0]='/0';
		cout<<"\n\n >> Student Record Created";
	}

	void show_student()
	{
		cout<<"\nAdmission no. : "<<admno;
		cout<<"\nStudent Name : "<<name;
		cout<<"\nNo of Book issued : "<<token;
		if(token==1)
		cout<<"\nBook No : "<<stbno;
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
};

/*------- Object initialize ------------*/
fstream fp; // File input & output
ifstream fin; //File input
ofstream fout; //File output
book bk;
student st;

/*------ MAIN FUNCTION --------*/
void main()
{
	char ch;
	intro();
	do
	{
		clrscr();
		cout<<"\n\n\n\t M A I N  M E N U ";
		cout<<"\n\n\t01. BOOK ISSUE";
		cout<<"\n\n\t02. BOOK DEPOSIT";
		cout<<"\n\n\t03. ADMINISTRATOR MENU";
		cout<<"\n\n\t04. EXIT";
		cout<<"\n\n\tPlease Select Your Option ( 1 - 4 )";
		ch=getche();
		switch(ch)
		{
			case '1':clrscr(); book_issue(); break;
			case '2':book_deposit(); break;
			case '3':admin_menu(); break;
			case '4':exit(0);
			default :cout<<"\a";
		}

	} while(ch!='4');
}

/* Function Definitions */
void admin_menu()
{
	clrscr();
	int ch2;
	cout<<"\n\n\n\t A D M I N I S T R A T O R  M E N U ";
	cout<<"\n\t 01.CREATE STUDENT RECORD";
	cout<<"\n\t 02.DISPLAY ALL STUDENTS RECORD";
	cout<<"\n\t 03.DISPLAY SPECIFIC STUDENT RECORD ";
	cout<<"\n\t 04.MODIFY STUDENT RECORD";
	cout<<"\n\t 05.CREATE BOOK ";
	cout<<"\n\t 06.DISPLAY ALL BOOKS ";
	cout<<"\n\t 07.DISPLAY SPECIFIC BOOK ";
	cout<<"\n\t 08.MODIFY BOOK ";
	cout<<"\n\t 09.BACK TO MAIN MENU";
	cout<<"\n\n\t Please Enter Your Choice ( 1 - 11 ) ";
	cin>>ch2;
	switch(ch2)
	{
		case 1: clrscr(); write_student(); break;
		case 2: display_alls(); break;
		case 3:
		{
			char num[6];
			clrscr();
			cout<<"\n\n\tPlease Enter The Admission No. : ";
			cin>>num;
			display_sps(num);
			break;
		}
		case 4: modify_student();break;
		case 5: clrscr(); write_book(); break;
		case 6: display_allb(); break;
		case 7:
		{
			char num[6];
			clrscr();
			cout<<"\n\n\tPlease Enter The book No. : ";
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

void write_book()
{
	char ch;
	fout.open("book.dat", ios::app);
	do
	{
		clrscr();
		bk.create_book();
		fout.write( (char*)&bk, sizeof(bk) );
		cout<<"\n\nDo you want to add more record..(Y/N?)";
		cin>>ch;
	} while( ch=='y' || ch=='Y' );
	fout.close();
}

void write_student()
{
	char ch;
	fout.open("student.dat", ios::app);
	do
	{
		st.create_student();
		fout.write( (char*)&st, sizeof(st) );
		cout<<"\n\Do you want to add more record..(Y/N?)";
		cin>>ch;
	} while(ch=='y'||ch=='Y');
	fout.close();
}

void display_spb(char n[])
{
	cout<<"\nBOOK DETAILS\n";
	int flag=0;
	fin.open("book.dat", ios::in);
	fin.read( (char*)&bk,sizeof(bk) );
	while( !fin.eof() )
	{
		if(strcmpi(bk.retbno(),n)==0)
		{
			bk.show_book();
			flag=1;
		}
		fin.read( (char*)&bk,sizeof(bk) );
	}

	fin.close();
	if(flag==0)
	cout<<"\n\n[ ERROR ] Book not found !!";
	getch();
}

void display_sps(char n[])
{
	cout<<"\nSTUDENT DETAILS\n";
	int flag=0;
	fin.open( "student.dat", ios::in );
	fin.read( (char*)&st, sizeof(st) );
	while( !fin.eof() )
	{
		if((strcmpi(st.retadmno(),n)==0))
		{
			st.show_student();
			flag=1;
		}
		fin.read( (char*)&st, sizeof(st) );
	}

	fin.close();
	if(flag==0)
	cout<<"\n\n No books issued !!";
	getch();
}

void modify_book()
{
	char n[6];
	int found=0;
	clrscr();
	cout<<"\n\n\t...MODIFY BOOK REOCORD.... ";
	cout<<"\n\n\tEnter book no. : ";
	cin>>n;
	fp.open("book.dat",ios::in | ios::out);
	fin.read( (char*)&bk, sizeof(bk) );
	while( !fp.eof() && found==0 )
	{
		if(strcmpi(bk.retbno(),n)==0)
		{
			bk.show_book();
			cout<<"\nEnter The New Details of book..."<<endl;
			bk.modify_book();
			int pos=-1*sizeof(bk);
			fp.seekp(pos,ios::cur);
			fp.write((char*)&bk,sizeof(bk));
			cout<<"\n\n\t Record Updated !!";
			found=1;
		}
		fin.read( (char*)&bk, sizeof(bk) );
	}

  fp.close();
	if(found==0)
	cout<<"\n\n Book not found !!";
	getch();
}

void modify_student()
{
	char n[6];
	int found=0;
	clrscr();
	cout<<"\n\n\t...MODIFY STUDENT RECORD... ";
	cout<<"\n\n\tEnter admission no. : ";
	cin>>n;
	fp.open("student.dat",ios::in|ios::out);
	fin.read( (char*)&st, sizeof(st) );
	while( !fp.eof() && found==0)
	{
		if(strcmpi(st.retadmno(),n)==0)
		{
			st.show_student();
			cout<<"\nEnter The New Details of student"<<endl;
			st.modify_student();
			int pos=-1*sizeof(st);
			fp.seekp(pos,ios::cur);
			fp.write((char*)&st,sizeof(st));
			cout<<"\n\n\tRecord Updated !!";
			found=1;
		}
		fin.read( (char*)&st, sizeof(st) );
	}
	fp.close();
	if(found==0)
	cout<<"\n\nStudent not found !!";
	getch();
}

void display_alls()
{
	clrscr();
	fin.open("student.dat",ios::in);
	
	cout<<"\n\n\t\tSTUDENT LIST\n\n";
	cout<<"==================================================================\n";
	cout<<" \t Admission No."<<setw(10)<<"Name"<<setw( 20 )<<"Book Issued \n";
	cout<<"==================================================================\n";
	fin.read( (char*)&st, sizeof(st) );
	while( !fin.eof() )
	{
		cout<<"\t"<<st.admno<<setw(20)<<st.name<<setw(10)<<st.token<<endl;
		fin.read( (char*)&st, sizeof(st) );
	}
	
	if(!fin)
	{
		cout<<"STUDENT.DAT not found !! ";
		getch();
		return;
	}

	fin.close();
	getch();
}

void display_allb()
{
	clrscr();
	fin.open("book.dat", ios::in);
	if( !fin )
	{
		cout<<"BOOK.DAT not found !!";
		getch();
		return;
	}

	cout<<"\n\n\t\tBook LIST\n\n";
	cout<<"=========================================================================\n";
	cout<<"Book Number"<<setw(20)<<"Book Name"<<setw(25)<<"Author\n";
	cout<<"=========================================================================\n";
	fin.read( (char*)&bk, sizeof(bk) );
	while( !fin.eof() )
	{
		cout<<bk.bno<<setw(30)<<bk.bname<<setw(30)<<bk.aname<<endl;
		fin.read( (char*)&bk, sizeof(bk) );
	}
	fin.close();
	getch();
}

void book_issue()
{
	char sn[6],bn[6];
	int found=0,flag=0;
	clrscr();
	cout<<"\n\n... BOOK ISSUE ...";
	cout<<"\n\n\tEnter The student's admission no. : ";
	cin>>sn;
	fp.open("student.dat",ios::in|ios::out);
	fin.open("book.dat",ios::in|ios::out);
	fin.read( (char*)&bk, sizeof(bk) );
	while( !fp.eof() && found==0)
	{
		if(strcmpi(st.retadmno(),sn)==0)
		{
			found=1;
			if(st.rettoken()==0)
			{
				cout<<"\n\n\tEnter the book no. : ";
				cin>>bn;
				fin.read( (char*)&bk, sizeof(bk) );
				while( !fin.eof() )
				{
					if(strcmpi(bk.retbno(),bn)==0)
					{
						bk.show_book();
						flag=1;
						st.addtoken();
						st.getstbno(bk.retbno());
						int pos=-1*sizeof(st);
						fp.seekp(pos,ios::cur);
						fp.write((char*)&st,sizeof(st));
						cout<<"\n\n\t Book issued successfully";
						cout<<"\n\tPlease submit within 7 days, fine INR 1 / day thereafter.";
					}
					fin.read( (char*)&bk, sizeof(bk) );
				}
				if(flag==0)
				cout<<"Book does not exist";
			}
			else
			cout<<"You have not returned the last book";
		}
	}
	if(found==0)
	cout<<"Student record not found !";
	getch();
	fp.close();
	fin.close();
}
void book_deposit()
{
	char sn[6],bn[6];
	int found=0,flag=0,day,fine;
	clrscr();
	cout<<"\n\nBOOK DEPOSIT ...";
	cout<<"\n\n\tEnter The student's admission no.";
	cin>>sn;
	fp.open("student.dat",ios::in | ios::out);
	fin.open("book.dat",ios::in|ios::out);
	fin.read( (char*)&bk, sizeof(bk) );
	while( !fp.eof() && found==0)
	{
		if(strcmpi(st.retadmno(),sn)==0)
		{
			found=1;
			if(st.rettoken()==1)
			{
				fin.read( (char*)&bk, sizeof(bk) );
				while( !fin.eof() && flag==0)
				{
					if(strcmpi(bk.retbno(),st.retstbno())==0)
					{
						bk.show_book();
						flag=1;
						cout<<"\n\nBook deposited in no. of days : ";
						cin>>day;
						if(day>7)
						{
							fine=(day-7)*1;
							cout<<"\n\nPlease deposit fine of Rs. "<<fine;
						}
						st.resettoken();
						int pos=-1*sizeof(st);
						fp.seekp(pos,ios::cur);
						fp.write((char*)&st,sizeof(st));
						cout<<"\n\n\t Book deposited successfully";
					}
					fin.read( (char*)&bk, sizeof(bk) );
				}
				if(flag==0)
				cout<<"Book no does not exist";
			}
			else
			cout<<"No book issued.. Successfully !!";
		}
		fin.read( (char*)&bk, sizeof(bk) );
	}
	if(found==0)
	cout<<"Student not found !!";
	getch();
	fp.close();
	fin.close();
}
void intro()
{
	clrscr();
	cout<<"\t\t ==============================================="<<endl;
	cout<<"\t\t  L I B R A R Y  M A N A G M E N T  S Y S T E M "<<endl;
	cout<<"\t\t ==============================================="<<endl;
	cout<<"\n\n MADE BY : Kushagra Karira";
	cout<<"\n\n SCHOOL  : Maharana Mewar Public School, Udaipur";
	getch();
}
//    			Thank You for reading
