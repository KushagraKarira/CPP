#include<iostrem.h>
#include<conio.h>
struct TEXTBOOKS
{
char ISBN[20];
char TITLE[80];
TEXTBOOKS*link;
};
class stack;
{
 textbooks*top;
 top=null;
void push();
void pop();
void display();
}t;
void stack :: push()
{
 TEXTBOOKS*top=new TEXTBOOKS;
   cout<<"Enter ISBN";
   gets(top->ISBN)
   Cout<<"Enter title";
   gets(top->title)
   temp->link=temp;
   temp=temp;
 }
  void stack::pop()
   if tmp== NULL()
   cout<<"underflow;
   else
 {
   TEXTBOOKS *ptr=top;
     cout<<"\n"<<"top->ISBN";
     cout<<"delete;
     temp=temp->link;
     delete ptr;
 }

  void stack::display()
  if (tmp==null)
  cout<<"stack is empty=";
  else
  {
 TEXTBOOKS *temp=top;
 while (temp!=null)
 cout<<"\n"<<"temp";
 temp =temp->link;
  }


void main()
{
clrscr()
cout<<"MENU=";
cin>>MENU;
cout<<"\n1. push=";
cin>>push;
cout<<"\n2. pop=";
cin>>pop;
cout<<"choice=";
cin>>choice
int cho;
cin>>cho;
switch(cho)
{
case1 : cout<<"enter ISBN<<"Title";
t.push;
break
case2 : cout<<"enter ISBN<<"Title";
t.pop;
break
case3 : cout<<"enter ISBN<<"Title";
t.display;
}
}




