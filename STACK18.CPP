#include<fstream.h>
#include<conio.h>
#define N 10

// STACKS

class stack
{
	private:
	int arr[N];
	int top;


	public:
	void push(); // Insert
	void pop();  // Delete
	void disp(); // Display
	stack() // Constructor
	{
	top = 0;
	}
}stack;



int main()
{
 int choice;

 clrscr();
 do
 {
  cout<<" -- STACK BASED ARRAY -- "<<endl<<endl;
  cout<<" ENTER CHOICE "<<endl;
  cout<<" 1. Enter "<<endl;
  cout<<" 2. Delete "<<endl;
  cout<<" 3. Display "<<endl;
  cin>>choice;

  if( choice == 1 ) // Enter
  {
   stack.push();
  }

  if( choice == 2 ) //Delete
  {
   stack.pop();
  }

  if ( choice == 3 ) //Display
  {
   stack.disp();
  }
 } while ( choice == 1 || choice == 2 || choice == 3 );

 getch();

 return 0;
}

void stack::push()
{
	int var;
	cout<<" Enter number : ";
	cin>>var;

	if (top==N)  // Since i<n last i == 9 && N-1 == 9
	{ cout<<" STACK : STACK OVERFLOW "<<endl; }   // No value can be entred if stack is full
	if (top!=N)
	{ arr[top]=var; top=top+1; }
}

void stack::pop()
{
arr[top]=0;
top=top-1;
}

void stack::disp()
{
 clrscr();
 cout<<" Stacked Array : "<<endl;

 for ( int i=0; i<N; i++ )
 {
  cout<<" Array #"<<i<<" : "<<arr[i]<<endl;
 }
}