     /* Program to sort the given array in ascending order using bubble sort method */

#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int A[80],n;
cout<<"Enter desired size of array (<80): "; cin>>n;
cout<<"\n\nEnter the array : \n";
for(int i=0;; i++)
cin>>A[i];

cout<<"\n\nArray of elements is as shown below : \n\n";
for(i=0; ; i++)
cout<<A[i]<<" ";
cout<<"\n\nNow Elements will be arranged in ascending order using bubble sort :\n\n";

void bubble_sort(int A[],int n);

bubble_sort(A,n);

getch();
}

void bubble_sort (int A[], int n)
{ int temp; int count=0;
for(int i=0; ; i++)
{
	for(int j=0; ; j++)
		{ if(A[j+1]<A[j])
			{ count++;
			  temp=A[j+1];
			  A[j+1]=A[j];
			  A[j]=temp;
			cout<<"\n\nArray for iteration "<<count<<" is : \n\n";
			for(int k=0; ; k++)
			cout<<A[k]<<" ";
			}
		}
}
}










Output:

Enter desired size of array (<80): 5


Enter the array :
9
7
1
3
4

Array for iteration 1 is :

7 9 1 3 4

Array for iteration 2 is :

7 1 9 3 4

Array for iteration 3 is :

7 1 3 9 4

Array for iteration 4 is :

7 1 3 4 9

Array for iteration 5 is :

1 7 3 4 9

Array for iteration 6 is :

1 3 7 4 9

Array for iteration 7 is :

1 3 4 7 9


Sorted array is :

1 3 4 7 9


