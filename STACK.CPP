#include<fstream.h>
#include<conio.h>
#include<stdio.h>
struct node
  {
    int val;
    node * link;
  };
      class stack
    {
      node * top;
      public:
      stack()
    {
      top=NULL;
    }
	void push();
	void pop();
	void display();
       ~stack();
     }S;
	 void stack::push()
       {
	 node * ptr=new node;
	 cout<<"enter values=";
	 cin>>ptr->val;
	 ptr->link=top;
	 top=ptr;
       }
	   void stack ::pop()
	 {
	   if(top==NULL)
	 {
	    cout<<"stack is empty...underflow=";
	  }
	    else
	  {
	    node*temp=top;
	    cout<<"value to be deleted is "<<temp->val;
	    top=top->link;
	    delete temp;
	  }
	   }
	     void stack::display()
	   {
	     if (top==NULL)
	   {
	      cout<<"stack is empty=";
	    }
	      else
	    {
	       node*ptr=top;
	       while (ptr!=NULL)
	     {
		cout<<ptr-> val;
		ptr=ptr->link;
	      }
	       }
		}
		 stack::~stack()
	      {
		  node*ptr=top;
		  while (ptr!=NULL)
	       {
		  delete ptr;
		  ptr=ptr->link;
		}
		}
		  void main()
		{ char ch;
		  do
		{
		  clrscr();
		  cout<<"\t\t\tMENU \n\t\t1.PUSH \n\t\t2.POP \n\t\t3.DISPLAY \n\t\t4.CHOICE";
		  int opt;
		  cin>>opt;
		  switch(opt)

		{
		  case 1:
		  S.push();
		  break;
		  case 2:
		  S.pop();
		  break;
		  case 3:
		  S.display();
		  break;
		}

		}while(ch=='y'||ch=='Y');
		getch();

		 }










