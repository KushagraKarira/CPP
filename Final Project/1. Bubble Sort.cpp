//Binary Search
#include<iostream.h>
#include<conio.h>
#define size 10 //Length of array
int arr[size];
void swap(int&a,int&b)
{
    int temp=a;
    a=b;
    b=temp;
}
 
// Bubble sort
void bubbleSort()
{
   for (int i=0;i<size;i++)         
       for (int j=0;j<size;j++) 
           if (arr[j] > arr[j+1])
              swap(arr[j],arr[j+1]);
}
void print(int arr[], int size)
{
    int i;
    for (i=0;i<size;i++)
    {
		cout<<"Array "<<i<<" = "<<arr[i];
	}
}
int main()
{
	for(i=0;i<size;i++)
	{
		cout<<"Enter array : "
		cin>>arr[i];
	}
    bubbleSort();
    cout<<"Sorted array:"<<endl;;
    print();
    return 0;
}