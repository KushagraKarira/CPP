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
void delete_student(); //Delete Student
void delete_book(); //Delete book
void display_alls(); //Display all students
void display_allb(); //Display all books
void book_issue(); //Issue book
void book_deposit(); //Deposit and fine
void admin_menu(); //Administrator menu
void intro(); // intro

/*------------- Class defination -------------*/
class book
{
private:
	char bno[6];
	char bname[50];
	char aname[20];

public:
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
	void report() { cout<<bno<<setw(30)<<bname<<setw(30)<<aname<<endl; }
};

class student
{
private:
	char admno[6];
	char name[20];
	char stbno[6];
	int token;

public:
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
	void report() { cout<<"\t"<<admno<<setw(20)<<name<<setw(10)<<token<<endl; }
};

/*------- Object initialize ------------*/
fstream fp,fp1; // File Pointer
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
	cout<<"\n\n\t01.CREATE STUDENT RECORD";
	cout<<"\n\n\t02.DISPLAY ALL STUDENTS RECORD";
	cout<<"\n\n\t03.DISPLAY SPECIFIC STUDENT RECORD ";
	cout<<"\n\n\t04.MODIFY STUDENT RECORD";
	cout<<"\n\n\t05.DELETE STUDENT RECORD";
	cout<<"\n\n\t06.CREATE BOOK ";
	cout<<"\n\n\t07.DISPLAY ALL BOOKS ";
	cout<<"\n\n\t08.DISPLAY SPECIFIC BOOK ";
	cout<<"\n\n\t09.MODIFY BOOK ";
	cout<<"\n\n\t10.DELETE BOOK ";
	cout<<"\n\n\t11.BACK TO MAIN MENU";
	cout<<"\n\n\tPlease Enter Your Choice ( 1 - 11 ) ";
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
		case 5: delete_student();break;
		case 6: clrscr(); write_book(); break;
		case 7: display_allb(); break;
		case 8:
		{
			char num[6];
			clrscr();
			cout<<"\n\n\tPlease Enter The book No. : ";
			cin>>num;
			display_spb(num);
			break;
		}

		case 9: modify_book();break;
		case 10: delete_book();break;
		case 11: return;
		default:cout<<"\a";
	}

	admin_menu();
}

void write_book()
{
	char ch;
	fp.open("book.dat",ios::out | ios::app);
	do
	{
		clrscr();
		bk.create_book();
		fp.write((char*)&bk,sizeof(book));
		cout<<"\n\nDo you want to add more record..(Y/N?)";
		cin>>ch;
	} while( ch=='y' || ch=='Y' );
	fp.close();
}

void write_student()
{
	char ch;
	fp.open("student.dat",ios::out | ios::app);
	do
	{
		st.create_student();
		fp.write((char*)&st,sizeof(student));
		cout<<"\n\ndo you want to add more record..(y/n?)";
		cin>>ch;
	} while(ch=='y'||ch=='Y');
	fp.close();
}

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
	cout<<"\n\n[ ERROR ] Book not found !!";
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
	fp.open("book.dat",ios::in|ios::out);
	while(fp.read((char*)&bk,sizeof(book)) && found==0)
	{
		if(strcmpi(bk.retbno(),n)==0)
		{
			bk.show_book();
			cout<<"\nEnter The New Details of book..."<<endl;
			bk.modify_book();
			int pos=-1*sizeof(bk);
			fp.seekp(pos,ios::cur);
			fp.write((char*)&bk,sizeof(book));
			cout<<"\n\n\t Record Updated !!";
			found=1;
		}
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
			cout<<"\n\n\tRecord Updated !!";
			found=1;
		}
	}

	fp.close();
	if(found==0)
	cout<<"\n\nStudent not found !!";
	getch();
}

void delete_student()
{
	char n[6];
	int flag=0;
	clrscr();
	cout<<"\n\n\n\t...DELETE STUDENT...";
	cout<<"\n\nEnter admission no. to Delete : ";
	cin>>n;
	fp.open("student.dat",ios::in | ios::out);
	fstream fp2;
	fp2.open("Temp.dat",ios::out);
	fp.seekg(0,ios::beg);
	while(fp.read((char*)&st,sizeof(student)))
	{
		if(strcmpi(st.retadmno(),n)!=0)
		fp2.write((char*)&st,sizeof(student));
		else
		flag=1;
	}

  fp2.close();
	fp.close();
	remove("student.dat");
	rename("Temp.dat","student.dat");
	if(flag==1)
	cout<<"\n\n\tRecord Deleted ..";
	else
	cout<<"\n\n Student not found !!";
	getch();
}

void delete_book()
{
	char n[6];
	clrscr();
	cout<<"\n\n\n\t...DELETE BOOK...";
	cout<<"\n\nEnter Book no. to Delete : ";
	cin>>n;
	fp.open("book.dat",ios::in | ios::out);

	fstream fp2;

	fp2.open("Temp.dat",ios::out);
	fp.seekg(0,ios::beg);
	while(fp.read((char*)&bk,sizeof(book)))
	{
		if(strcmpi(bk.retbno(),n)!=0)
		{
			fp2.write((char*)&bk,sizeof(book));
		}
	}

	fp2.close();
	fp.close();
	remove("book.dat");
	rename("Temp.dat","book.dat");
	cout<<"\n\n\tRecord Deleted ..";
	getch();
}

void display_alls()
{
	clrscr();
	fp.open("student.dat",ios::in);
	if(!fp)
	{
		cout<<"STUDENT.DAT not found !! ";
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

void display_allb()
{
	clrscr();
	fp.open("book.dat", ios::in);
	if(!fp)
	{
		cout<<"BOOK.DAT not found !!";
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

void book_issue()
{
	char sn[6],bn[6];
	int found=0,flag=0;
	clrscr();
	cout<<"\n\n... BOOK ISSUE ...";
	cout<<"\n\n\tEnter The student's admission no. : ";
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
				cout<<"\n\n\tEnter the book no. : ";
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
						cout<<"\n\n\t Book issued successfully";
						cout<<"\n\tPlease submit within 7 days, fine INR 1 / day thereafter."";
					}
				}

				if(flag==0)
				cout<<"Book no does not exist";
			}

			else
			cout<<"You have not returned the last book";
		}
	}

	if(found==0)
	cout<<"Student record not found !";
	getch();
	fp.close();
	fp1.close();
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
						fp.write((char*)&st,sizeof(student));
						cout<<"\n\n\t Book deposited successfully";
					}
				}

				if(flag==0)
				cout<<"Book no does not exist";
			}

			else
			cout<<"No book issued.. Successfully !!";
		}
	}
	if(found==0)
	cout<<"Student not found !!";
	getch();
	fp.close();
	fp1.close();
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
