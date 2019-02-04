            /* Program to search an element of an array using Linear search method */

#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
int A[50]; int n; int p; int subscript; /*Note: subscript and index are same.*/
cout<<"Enter the array size : ";
cin>>n;    // n=size upto which user wants to insert values in array

cout<<"\n\nEnter elements of array : \n";
for(int i=0; i<n; i++)
cin>>A[i];

cout<<"\n\nThe array formed = ";
for(i=0; i<n; i++)
cout<<A[i]<<" ";

cout<<"\n\nEnter the element to be searched : ";
cin>>p;   // p=element to be searched


void linear_search ( int A[], int n, int p); //function declaration

linear_search(A,n,p);

getch();
}

void linear_search(int A[], int n, int p)
{ int count=0; int B[50]; int flag=0;
for(int i=0; i<n; i++)
	{ flag=count;
	if( A[i]==p)
		{
		B[count]=i;
		count++;
		flag=count;
		}
	}
	if(flag==0)
	cout<<"\n\nRequested element not found.";
	else
	for(i=0; i<=n; i++)
	{ if(A[i]==p)
		{
		cout<<"\n\nElement "<<p<<" is found";
		cout<<"\n\nSubscript = "<<i<<"\n\nPosition = "<<i+1<<"\n\n\n";
		}
	}
}
/*
Output:

Enter the array size : 5

Enter elements of array :
7
9
23
24
12


The array formed = 7 9 23 24 12

Enter the element to be searched : 24


Element 24 is found

Subscript = 3

Position = 4
*/

