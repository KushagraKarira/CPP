#include<iostream.h>
#include<conio.h>
struct student
{
  int rno;
  char name[20];
  int tmarks;
}s[2];
void main()
{
 clrscr();
 int i;
 for(i=0;i<2;i++)
 {
 cout<<"\n\n enter your roll no:";
 cin>>s[i].rno;
 cout<<"\n enter your name:";
 cin>>s[i].name;
 cout<<"\n enter your total marks:";
 cin>>s[i].tmarks;
 }
 for(i=0;i<2;i++)
 {
  if(s[i].tmarks>s[0].tmarks)
  {
      s[0].tmarks=s[i].tmarks;

      }
  }

 for(i=0;i<2;i++)
 {
 cout<<"\n"<<s[i].tmarks;
 }
 cout<<"this student get maximum marks:"
 if(s[1].tmarks>s[0].tmarks)
 {
 cout<<s[1].rno<<"\n"<<s[1].name<<"\n"<<s[1].tmarks;
 }
 else
 {
 cout<<s[0].rno<<"\n"<<s[0].name<<"\n"<<s[0].tmarks;
  }
 getch();
 }