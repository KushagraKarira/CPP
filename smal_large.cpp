/* Wap in c++ using pointers to find the smallest and the largest element in a dynamically created array.*/


#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

int *array, smallest, largest, n;

cout<<"\n\nEnter the number of elements : ";
cin>>n;

array=new[n];

cout<<"\n\nEnter the elements : \n\n";
for(int i=0; i<n; i++)
cin>>array[i];

i=0;
cout<<"\n\nThe array formed is : \n\n";

while(i!=n)
{
cout<<array[i]<<"  ";
i++;
}

smallest=array[0];

for(i=0; i<n; i++)
{
	if(array[i]<=smallest)
	smallest=array[i];
}

largest=array[0];

for(i=0; i<n; i++)
{
	if(array[i]>=largest)
	largest=array[i];
}

cout<<"\n\nThe smallest element is : "<<smallest<<"\n\nThe largest element is : "<<largest;

getch();

}

















Output : 

Enter the number of elements : 5

Enter the elements :
1
9
2
8
6

The array formed is :

1  9  2  8  6

The smallest element is : 1

The largest element is : 9




























