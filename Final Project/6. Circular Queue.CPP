#include<iostream.h>
#include<conio.h>
#define N 10 //N is the size of the queue
// Circular Queue
int arr[N];
int f=0,r=0; // F = Front of Queue && R = Rear of Queue

void qadd();
void qdel();
void disp();

int main()
{
	clrscr();
	int choice;

	do
	{

	cout<<" --- Circular Queue --- "<<endl;
	cout<<" Enter Choice : "<<endl;
	cout<<" 1. Enter "<<endl;
	cout<<" 2. Delete "<<endl;
	cout<<" 3. Display "<<endl;
	cin>>choice;

	if (choice==1) //Enter
	{
		qadd();
	}

	if (choice==2) //Delete
	{
		qdel();
	}

	if (choice==3) //Display
	{
		disp();
	}

	} while ( choice == 1 || choice == 2 || choice == 3 );

	getch();
	return 0;
}

void qadd()
{
	int var;
	cout<<"Enter Variable :";
	cin>>var;

	if ((r+1)%N==f) //If ( rear + 1 ) % size == front
	{
		cout<<"                      Q U E U E  F U L L "<<endl;
	}
	r=(r+1)%N; //Rear++ % Size
	arr[r]=var; //Array assigned
}

void qdel()
{
	if (f==r)
	{
		cout<<"                      Q U E U E  E M P T Y "<<endl;
	}
	f = (f+1)%N; // Front++ % Size
	arr[f]=0;
}

void disp()
{
	cout<<" Displaying Queue "<<endl;
	for ( int i=0; i<N; i++ ) //Circular Queue will display variables from front to rear
	{
		cout<<"Printing arr ["<<i<<"] = "<<arr[i]<<endl;
	}
}