/* Wap in c++ to implement Queue as a linked list */
#include<iostream.h>
#include<conio.h>

 struct node {
 int roll;
	      	 node* next;
	      }*front,*rear,*ptr,*newptr,*np;

 node *create(int a)
	{
   ptr=new node;
	   ptr->roll=a;
	   ptr->next=NULL;
	   return ptr; 
}

 void insert(node *np)
	{
    if(front==NULL)
	   	front=rear=np;
	  else
	   	{ 
rear->next=np;
	     		rear=np;    
}
	}

 void delet()
	{
    if(front==NULL)
	  	cout<<"\n Underflow!!!!";
	  else
	   	{
 ptr=front;
	     		front=front->next;
	     		delete ptr; 
}
	}

 void display(node *np)
	{ 
    while(np!=NULL)
	   	{ 
cout<<np->roll<<"-> ";
	     		np=np->next; 
}
	}

 void main()
	{ 
  clrscr();
	  front=rear=NULL;
	  int n,m;
	  char ans,ch;
	  do
	  { cout<<"\nChoose from the menu : "
		<<"\n 1) Insert."
		<<"\n 2) Delete
		<<"\n 3) Display."
		<<"\n\n Enter your choice : ";
	   	 cin>>n;
	    switch(n)
	    { 
    case 1: ans='y';
		      while(ans=='y'||ans=='Y')
		         { 
cout<<"\n Enter element to be inserted .";
			cin>>m;

			newptr=create(m);

			if(newptr==NULL)
				cout<<"\n Cannot create !!!!";

			insert(newptr);

			cout<<"\n The Queue formed is  : ";

			display(front);

			cout<<"\n Want to enter more nodes ?: ";
			cin>>ans; 
          }
		      break;

	      case 2: ans='y';
		      while(ans=='y'||ans=='Y')
		      { 	
delet();
			cout<<"\n Queue : ";
			display(front);
			cout<<"\n Want to delete more ?: ";
			cin>>ans; 
      }
		      break;

	      case 3: cout<<"\n Queue : ";
		      display(front);
		      break;

	     default: cout<<"\n You entered wrong choice...";
	    }

	  cout<<"\n Want to return to main menu ? : ";
	  cin>>ch;
          }while(ch=='y'||ch=='Y');
 getch();
}
















OUTPUT

Choose from the menu : 
 1. Insert
 2. Delete
 3. Display

 Enter your choice : 1

 Enter element to be inserted : 1

 The Queue formed is  :

 1-->

 Want to enter more nodes ?: y

 Enter element to be inserted .2

 The Queue formed is  :

 1-> 2->

 Want to enter more nodes ?: y


 Enter element to be inserted .3

 The Queue formed is  :

 1-> 2-> 3->

 Want to enter more nodes ?: n

 Want to return to main menu ? : y

Choose from the menu : 
 1. Insert
 2. Delete
 3. Display

 Enter your choice : 2

Queue : 

2-> 3->

 Want to delete more ?: n

 Want to return to main menu ? : y

Choose from the menu : n
 1. Insert
 2. Delete
 3. Display

 Enter your choice : 3

 Queue : 

2-> 3->

 Want to return to main menu ? : n
