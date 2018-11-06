#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
class book
{
char bno[6];
char bname[50],name;
char aname[20];
public:
void create_book()
{
cout<<"\nnew book entry";
cout<<"\nenter the book no";
cin>>bno;
cout<<"\nenter the name of the boo";
gets(bname);
cout<<"\n\nbook created";
}
void show_book()
{
cout<<"book no"<<bno;
cout<<"\nbook name";
puts(bname);
cout<<"auther name";;
puts(bname);
}
void modify_book()
{
cout<<"\nbook no"<<bno;
cout<<"\nmodify book name";
gets(bname);
cout<<"modify authers name of the book";
gets(name);
}
char*retbno()
{
return bno;
}
void report()
{
cout<<bno<<bname<<aname<<endl;
}
}b;
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
 cout<<"\n new student entry";
 cout<<"\n enter the admission no";
 cin>>admno;
 cout<<"enter the name of student";
 gets(name);
 token=0 ;
 stbno[0]='o';
 cout<<"stdent record created";
 }
 void show_student()
 {
 cout<<"\nadmission no"<<admno;
 cout<<"\n student name";
 puts(name);
	cout<"no of book isuued";
	if(token==1)
	cout<<"bokk no"<<stbno;
		}
	  void modify student()
	  {
	  cout<<"admission no"<<admno;
	  cout<<"modify student name";
	  gets(name);
	  }
	  char*retadmno()
	  {
	  return admno;
	  }
	  char*retstbno()
	  {
	  return stbno;
	  }
	  int retoken()
	  {
	  return token;
	  }
	  void add token()
	  {
	   token=1;
	   }
	   void reset token()
	  {
	  token=0;
	  }
	  void getstbno(chart[])
	  {
	  strcpy(stbno,t)
	  }

	  {
	  cout<<"error th file could not be created";
	  getch();
	  return;
	  }
	  cout<<"\n\n\t\t student list\n\n"
	  cout<<"admisssion no"<<"name"<<book issued \n";
	  while(fp.read((char*)&s,sizeof(student)))
	  {
	  s.report();
	  }
	  fp.close();
	  getch();
	  }
	  void display_allb()
	  {
	  clrscr();
	  fp.open("book.dat",ios::in)
	  if(!fp)
	  {
	  void report()
	  {
	  cout<"\t"admno<<name<<token<<endl;
	  }
	  }s;


	  fstream fp,fp1;
	  void write_book()
	  {
	  clrscr();
	  b.create book();
	  fp.write((char*)&b,sizeof(book));
	  fp.close();
	  }
	  void display_(spb(char n[])
	  {
	  cout<<"\n book details";
	  int flag=0;
	  fp.open("book.dat,ios::in);
	  while(fp.read((char*)&b,sizeof(book)))
	  {
	  if(strcmpi(b.retbno(),n)==0)
{
b.show book();      //change 1
flag=1;
}
}
fp.close();
if(flag==0)
cout<<"\n\nBook does not exist";
getch();
}
void display sps(char n[])  //change 2
{
cout<<"\nSTUDENT DETAILS\N";
int flag=0;
fp.open("student.dat",ios::in);
while(fp.read((char*)&s,sizeof(student)))
{
if((strcmpi(s.retadmno(),n)==0))
{
s.show student();
flag=1;
}
}
fp.close();
if(flag==0)
cout<<"\n\nStudent does not exist";
getch();
}
void modify book()
{
clrscr();    //change 3
char n[6];
int found=0;
cout<<"\n\n\tMODIFY BOOK RECORD";
cout<<"\n\n\tEnter the book no. of the book";
cin>>n;
fp.open("book.dat",ios::in|ios::out);		 //change 4
while(fp.read((char*)&b,sizeof(book)&&found==0)
{
if(strcmpi(b.retno(),n)==0)
{
b.show book();    //change 5
cout<<"\nEnter the new record of book"<<end;
b.modify book();  //change 6
int pos=-1*sizeof(b);
fp.seekp(pos,ios::cur);
fp.write((char*)&b,sizeof(book));
cout<<"\n\n\tRecord Updated";
found=1;
}
}
fp.close();
if(found==0)
cout<<"\n\nRecord Not Found";
getch();
}


void modify student()
{

char n[6];
int found;
cout<<"\n\n\tModify Student Record";
cout<<"\n\n\tEnter admission no. of the student";
cin>>n;
fp.open("student.dat",ios::in|ios::out);
while(fp.read((char*)&s,sizeof(student))&&found==0)
{
if(strcmpi(s.retaamno(),n)==0)
{
s.show student();
cout<<"\nEnter The New Details Of Student"<<endl;
s.modify student();
int pos=-1*sizeof(s);
fp.seekp(pos,ios::cur);
fp.write((char*)&s,sizeof(student));
cout<<"\n\n\tRecord Updated";
found=1;
}
}
fp.close():
if(found==0)
cout<<"\n\nRecord Not Found";
getch();
}
void delete student()
{
clrscr();
char n[6];
int flag=0;
cout<<"\n\n\n\tDelete Student";
cout<<"\n\nEnter the admission no. of the student you want to delete:";
cin>>n;
fp.open("student.dat",ios::in|ios::out);
fstream fp2;cout<<"\n\nEnter the book you want to delete:";
cin>>n;
fp.open("book.dat",ios::in|ios::out);
fstream fp2;
fp2.open("Temp.dat",ios::out);
fp.seekg(0,ios::beg);
while(fp.read((char*)&b,sizeof(book)))
{
if(strcmoi(b.retbno(),n!=0)
{
fp2.write((char*)&b,sizeof(book));
}
}
fp2.close();
fp.close();
remove("book.dat");
rename("Temp.dat","book.dat");
cout<<"\n\n\tRecord Deleted";
getch();
}
void display alls()
{
fp.open("student.dat",ios::in);
clrscr();
if(!fp)
fp2.open("Temp.dat",ios::out);
fp.seekg(0,ios::beg);
while(fp.read((char*)&s,sizeof(student)))
{
if(strcmpi(s.retadmno(),n)!=0)
fp2.write((char*)&s,sizeof(student));
else
flag=1;
}
fp2.close();
fp.close();
remove("student.dat");
rename("Temp.dat","student.dat");
if(flag==1)
cout<<"\n\n\tRecord Deleted";
else
cout<<"\n\nRecord not found";
getch();
}
void delete book()
{
clrscr();
char n[6];
cout<<"\n\n\n\tdelete Book";
cout<<"ERROR!!!FILE COULD NOT BE OPEN";
getch();
return;
}
cout<<"\n\n\t\tBook List\n\n";
cout<<"=================================================================\n";
cout<<"Book Number"<<"Book Name"<<"Author\n";
cout<<"==================================================================\n";
while(fp.read((char*)&b,sizeof(book)))
{
b.report();
}
fp.close();
getch();
}
void book issue()
{
clrscr();
char sn[6],bn[6];
int found=0,flag=0;
cout<<"\n\nBook Issue";
cout<<"\n\n\tEnter the student admission no.";
cin>>sn;
fp.open("student.dat",ios::in|ios::out);
fp1.open("book.dat",ios::in|ios::out);
while(fp.read((char*)&s,sizeof(student))&&found==0)
{
if(strcmpi(s.retadmno(),sn)==0)
{
found=1;
if(s.rettoken()==0)
{
cout<<"\n\n\tEnter the book no.";
cin>>bn;
while(fp1.read((char*)&b,sizeof(book))&&flag==0)
{
if(strcmpi(b.retbno(),bn)==0)
{
b.show book();
flag=1;
s.addtoken();
s.getstbno(b.retbno());
int pos=-1*sizeof(s);
fp.seekp(pos,ios::cur);
fp.write((char*)&s,sizeof(student));
cout<<"\n\n\t Book issued successfully\n\nPlease Note:in backside of your book and submit after 15 days  Write the current date within 15 days fine Rs.1 for each day period";
}
}
if(flag==0)
cout<<"Book no. does not exit";
}
else
cout<<"You have not returned the last book";
}
}
if(found==0)
cout<<"Student record not exist";
getch();
fp.close();
fp1.close();
}
void book deposit()
{
clrscr();
char sn[6],bn[6];
int found=0,flag=0,day,fine;
cout<<"\n\nBook Deposit";
cout<<"\n\n\tEnter the student admission no.";
cin>>sn;
fp.open("student.dat",ios::in|ios::out);
fp1.open("book.dat",ios::in|ios::out);
while(fp.read((char*)&s,sizeof(student))&&found==0)
{
if(strcmpi(s.retadmno(),sn)==0)
{
found=1;
if(s.rettoken()==1)
{
while(fp1.read((char*)&b,sizeof(book))&&flag==0)
{
if(strcmpi(b.retbno(),s.retstbno())==0)
{
b.show book ();
flag=1;
cout<<"\n\nBook deposited in no. of days";
cin>>day;
if(day>15)
{
fine=(day-15)*1;
cout<<"\n\nFine has to deposited Rs."<<fine;
}
s.resettoken();
int pos=-1*sizeof(s);
fp.seekp(pos,ios::cur);
fpp.write((char*)&s,sizeof(student));
cout<<"\n\n\tBook deposited successfully";
}
}
if(flag==0)
cout<<"Book no. does not exist";
}
else
cout
<<"No book is issued ";
}
}
if(found==0)
cout<<"student record not exist";
getch();
fp.close;
fp1.close();
}void admin menu()
{
clrscr();
int ch2;
coiut<<"\n\n\n\tADMINISTRATOR MENU";
cout<<"\n\t------------------ ------";
cout<<"\n\n\t1.CREATE STUDENT MENU":
cout<<"\n\n\t2.DISPLAY ALL STUDE3NT RECORD";
cout<<"\n\n\t3.DISPLAY SPECIFIC STUDENT RECORD";
cout<<"\n\n\t4.MODIFY STUDENT RECORD";
cout<<"\n\n\t5.DELETE STUDENT RECORD";
cout<<"\n\n\t6.CREATE BOOK";
cout<<"\n\n\t7.DISPLAY ALL BOOKS";
cout<<"\n\n\t8.DISPLAY SPECIFIC BOOK";
cout<<"\n\n\t9.MODIFY BOOK";
cout<<"\n\n\t10.DELETE BOOK";
cout<<"\n\n\t11.BACK TO MENU";
cout<<"\n\n\tPlease Enter Your Choice(1-11)";
cin>>ch2;
switch(ch2)
{
case 1:
clrscr();
write student();
break;
case 2:
diplay alls();
break;
case 3:
char num[6];
clrscr();
cout<<"\n\n\tPlease Enter The Admission No." ;
cin>>num;
diplay sps(num);
break;
case 4:
modify student();
break;
case 5:
delete student();
break;
case 6:
clrscr();
write book();
break;
case 7:
display allb();
break;
case 8:
{
char num[6];
clrscr();
cout<<"\n\n\tPlease Enter The Book No.";
cin>>num;
display spb(num);
}
break;
case 9:
modify book();
break;
case 10:
delete book();
break;
case 11:
return;
default:
cout<<"\a";
}
admin menu();
}
void main()
{
char ch;
do                                //change 0
{
clrscr();
cout<<"\n\n\n\tMAIN MENU";
cout<<"-------------------";
cout<<"\n\t1.BOOK ISSUE";
cout<<"\n\t2.BOOK DEPOSIT";
cout<<"\n\n\t3.ADMINISTRATOR MENU";
cout<<"\n\n\t4.Exit";
cout<<"\n\n\n\t\Please Select Your Option(1-4)";
cin>>ch;
switch(ch)
{
case'1':
clrscr();
book issue();
break;
case'2':
book deposit();
break;
case'3':
admin menu();
break;
case'4':
exit(0);
default:
cout<<"Invalid key pressed !!!";
}
}
while(ch!='4');
}


