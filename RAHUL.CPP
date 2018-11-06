
		//BINARY SEARCH ALGORITHM USING SELECTION SORT
#define n 30
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
void s_sort(arr[],int n);
void read_array(arr[],int n)
void read_array()
{
	int arr[5],n;
	cout<<"\nEnter the array elements:";
	for(int i=0;i<5;i++)
	cin>>arr[i];

}
void s_sort()
{
	int arr[5],pos=0,n;
	int small,large,temp;
	cout<<"\nThe array is:";
	read_array();
	//sorting of an array
	for(int i=0;i<n-1;i++)
	{
		small=arr[i];
		pos=i;
		for(int j=i+1;j<n;j++)
		{
		       if(arr[j]<small)
		       {
				small=arr[j];
				pos=j;
		       }
			temp=arr[i];
			arr[i]=arr[pos];
			arr[pos]=temp;
		}
 //		for(int i=0;i<n;i++)
   //		cout<<arr[pos];
	}
}

void main()
{
	clrscr();
	int i,arr[50],n;
	int first,last,mid;
	int search=0;
       //cout<<"Enter the size of array";
	//cin>>n;
	cout<<"\n The array before sorting is:";
	read_array(arr,n);
	cout<<"\n The array after sorting is:";
	s_sort(arr,n);
	cout<<arr[i];
	first=0;
	last=n-1;
	mid=(first+last)/2;
	cout<<"Enter element to search";
	cin>>search;
	while(arr[i]==search)
	{
	  //	cout<<"Element found at position:"<<search;
		search=mid+1;
		if(arr[i]<mid)
		last=mid-1;
		else if (arr[i]>mid)
		first=mid+1;
		mid=(first+last)/2;
	}
	cout<<"Element found at position:"<<mid;
	getch();
}



