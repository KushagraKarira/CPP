/* Wap to implement stack as a linked list */

#include<iostream.h>
#include<conio.h>
#include<process.h>

struct node {
	     	 int roll;
	      	node* next;
	      }*top,*save,*ptr,*newptr,*np;

node *create(int a)
	{
	  ptr=new node;
	  ptr->roll=a;
	  ptr->next=NULL;
	  return ptr;
	}

void push(node *np)
	{
	   if(top==NULL)
		top=np;
	   else
		{
		  save=top;
		  top=np;
		  np->next=save;
		}
	}

void pop()
	{
	  if(top==NULL)
	    cout<<"\n Underflow!!!!";
	  else
	    {
	     ptr=top;
	     top=top->next;
	     delete ptr;
	    }
	}

void display(node *np)
	{
	   while(np!=NULL)
		{
			cout<<np->roll<<" -> ";
			np=np->next;
		}
	}

void main()
	{
	  clrscr();
	  top=NULL;
	  int n,m;
	  char k,ch;

	  do {
	          cout<<"\nChoose from the menu :\n"
			
<<"\n 1. Push."
			<<"\n 2. Pop."
			<<"\n 3. Display."
			<<"\n 4. Quit."
			<<"\n\nEnter your choice : ";
			cin>>n;
	    switch(n)
	    {
	    case 1:   k='y';
		      while(k=='y'||k=='Y')
		      {
			cout<<"\n Enter element to be inserted .";
			cin>>m;

			newptr=create(m);

			if(newptr==NULL)
				cout<<"\n Cannot create !!!!";

			push(newptr);

			cout<<"\n The Stack formed is : ";

			display(top);

			cout<<"\n\n Want to enter again ?: ";
			cin>>k;
		      }
		      break;

	      case 2: k='y';
		      while(k=='y'||k=='Y')
		      {
			pop();
			cout<<"\n The Stack formed is : \n\n";
			display(top);
			cout<<"\n\n Want to delete again ?: ";
			cin>>k;
		      }
		      break;

	      case 3: cout<<"\n The Stack formed is : ";

		      display(top);
		      break;

	      case 4: exit(0);
		      break;

	     default: cout<<"\n Please enter desired keyword : ";
	    }

	  cout<<"\n Do you want to continue..? : ";
	  cin>>ch;

	}while(ch=='y'||ch=='Y');

getch();
}
/*
Output:

Choose from the menu :
 1. Push.
 2. Pop.
 3. Display.
 4. Quit.

Enter your choice : 1


Enter element to be inserted : 1

The Stack formed is : 

1 ->


Want to enter again ?: y


Enter element to be inserted : 2

The Stack formed is : 

2 -> 1 ->
*/
