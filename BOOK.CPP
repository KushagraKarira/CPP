#include<fstream.h>
#include<conio.h>
#include<stdio.h>
class book
{
int bno;
char title[20];
public:
int rbno()
{ return bno;  }
void ENTER()
{
cout<<"enter the book number";
cin>>bno;
cout<<"enter the title of the book";
gets(title);
}
void DISPLAY()
{
cout<<bno<<title<<endl;}
}B;
void write()
{
char ch,y,Y;
ofstream fout;
fout.open("BOOK.DAT");
do
{
cout<<"enter recrds"<<endl;
B.ENTER();
fout.write((char*)&B,sizeof(B));
cout<<"do u want to enter next record"<<endl;
cin>>ch;
}
while(ch==y||ch==Y);
fout.close();
}
void read()
{
ifstream fin;
fin.open("BOOK.DAT");
B.DISPLAY();
fin.read((char*)&B,sizeof(B));
fin.close();
}
void main()
{
write();
read();
}