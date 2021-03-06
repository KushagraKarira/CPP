/* Wap in C++ to create a linked list of integers and perform some basic operation on it. */

#include<iostream.h>
#include<process.h>
#include<conio.h>

struct node  {
		int info;
		node*next;
	       }*rear,*start,*newptr,*save,*ptr;

void delnode()
{

if(start==NULL)
	cout<<"underflow!!";
else
	{
	ptr=start;
	start=start->next;
	delete ptr;
	cout<<"\n\nFirst node deleted";
	}
}

void insert_beg(node*np)
{

if(start==NULL)
	start=np;
else
	{
	save=start;
	start=np;
	np->next=save;
	}
}

void display(node*np)
{

while(np!=NULL)
	{
	cout<<np->info<<"->";
	np=np->next;
	}
cout<<"\n";
}

node*create_new_node(int n)
{
ptr=new node;
ptr->info=n;
ptr->next=NULL;
return ptr;
}

void insert_end(node*np)
{

if(start==NULL)
	start=rear=np;

else
	{
	rear->next=np;
	rear=np;
	}
}

void search(node*np,int a)
{

int flag=0;
while(np!=NULL)
	{
	if(np->info==a)
		{
		flag=1;
		break;
		}
	else
		np=np->next;
	}

if(flag)
	cout<<a<<"\n\nFound";
else
	cout<<"\n\nNot found";
}

void main()
{

clrscr();
start=rear=NULL;
char ans='y',choice;
int ch,info,n;

do
{
cout<<"\n\nChoose from the menu :\n1.Insert at the end\n2.Insert at beginning\n3.Searching\n4.Deletion from begining \n5.Display \n";
cout<<"\n\nEnter your choice";
cin>>ch;

switch(ch)
{
case 1: do
	{
	cout<<"\n\nEnter information for the new node : ";
	cin>>info;

	newptr=create_new_node(info);

	if(newptr!=NULL)
		cout<<"\n\nNode has been created";
	else
		{
		cout<<"\n\nNode cannot be created;";
		exit(1);
		}
	insert_end(newptr);

	cout<<"\n\nThe Linked list is : ";
	display(start);
	cout<<"\n\nWant to insert again : ";
	cin>>choice;
	}while(choice=='y'||choice=='Y');
	break;

case 2: do
	{
	cout<<"\n\nEnter info for new node: ";
	cin>>info;
	newptr=create_new_node(info);
	if(newptr!=NULL)
		cout<<"\n\nNode has been created ";
	else
		{
		cout<<"\n\nNode cannot be created ";
		exit(1);
		}
	insert_beg(newptr);
	cout<<"\n\nThe Linked list is : ";
	display(start);
	cout<<"\n\nWant to insert again : ";
	cin>>choice;
	}while(choice=='y'||choice=='Y');
	break;


case 3: do
	{
	cout<<"\n\nEnter info to be searched : ";
	cin>>n;
	search(start,n);
	cout<<"\n\nWant to search again : ";
	cin>>choice;
	}while(choice=='y'||choice=='Y');
	break;

case 4: delnode();
	break;

case 5: display(start);
	break;

}// end of do switch

cout<<"\n\nWant to choose again : ";
cin>>ans;
}

while(ans=='y'||ans=='Y');
getch();
}









Output : 
Choose from the menu :
1.Insert at the end
2.Insert at beginning
3.Searching
4.Deletion from begining
5.Display

Enter your choice : 1

Enter information for the new node : 1
Node has been created
The Linked list is : 1->

Want to insert again : y

Enter information for the new node : 2
Node has been created
The Linked list is : 1->2->

Want to insert again : n

Want to choose again : y

Choose from the menu :
1.Insert at the end
2.Insert at beginning
3.Searching
4.Deletion from begining
5.Display

Enter your choice : 2
Enter info for new node: 10
Node has been created
The Linked list is : 10->1->2->

Want to insert again : n

Want to choose again : y

Choose from the menu :
1.Insert at the end
2.Insert at beginning
3.Searching
4.Deletion from begining
5.Display

Enter your choice : 3
Enter info to be searched : 2
Found

Want to search again : N

Want to choose again : y

Choose from the menu :
1.Insert at the end
2.Insert at beginning
3.Searching
4.Deletion from begining
5.Display

Enter your choice : 4
First node deleted

Want to choose again : y

Choose from the menu :
1.Insert at the end
2.Insert at beginning
3.Searching
4.Deletion from begining
5.Display


Enter your choice : 5
1->2->
Want to choose again : N


