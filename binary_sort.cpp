#include<iostream.h>
#include<conio.h>
#define size 10 //Length of array
int arr[size];
int mid=size/2;
int search;
void swap(int&a,int&b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
	for(i=0;i<size;i++)
	{
		cout<<"Enter array number : "
		cin>>arr[i];
	}
    for (int i=0;i<size;i++)         
       for (int j=0;j<size;j++) 
           if (arr[j] > arr[j+1])
              swap(arr[j],arr[j+1]);
		  
    cout<<"Sorted array:"<<endl;;
    for (i=0;i<size;i++)
    {
		cout<<"Array "<<i<<" = "<<arr[i];
	}
	cout<<"Enter number to be searched : ";
	cin>>search;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(number>mid)
			{
				mid=(mid+size)/2
		}
	}
    return 0;
}