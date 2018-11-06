#include<iostream.h>
#include<conio.h>

class library
{
private:
int acc_no;
char name_author[20];
char title_book[20];
char publisher_name[20];
int price;
int copies;
public:
void enterdata()
{
cout<<"enter the access no";
cin>>acc_no;
cout<<"enter the name of the author" ;
cin>>name_author;
cout<<"enter the name of the book";
cin>>title_book;
cout<<"enter the publisher name" ;
cin>>publisher_name;
cout<<"enter the price of the book";
cin>>price;
cout<<"enter the no of copies";
cin>>copies;
}
void dispdata()
{
cout<<"name of the author"<<name_author;
cout<<"name of the book "<<title_book;
cout<<"price of the book" <<price;
}
void addnew()
{
cout<<"enter the name of the book to be added" ;
cin>>title_book;
cout <<"name of the author";
cin>>name_author;
cout<<"new book is added to the library";
}
void delet()
{ char ch;
cout<<"enter the name of the book you want to delete " <<endl;
cin>>title_book;
cout<<"do you really want to delete the record";
cin>>ch;
while(ch==Y||ch==y)
cout<<"element deleted" ;
};
void main()
{
void.dispdata();
void.enterdata();
void.addnew();
void.delet();
clrscr();
getch();
}