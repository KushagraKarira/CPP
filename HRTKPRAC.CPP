//BOARD PRACTICAL EXAM 2015-16 BY HRITIK VAISHNAV (CLASS 12th F)
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int arr[20],pos,size,temp,min,n;
cout<<"Enter the size of array (MAX:20): ";
cin>>size;
for (int i=0;i<size;i++)
 {
  cout<<"\nEnter value ";
  cin>>arr[i];
 }
//SELECTION SORT

for(i=0;i<size-1;i++)
{
min=arr[i];
pos=i;
 for(int j=1;j<size;j++)
 {
 if (arr[j]<min)
  {
   min=arr[j];
   pos=j;
  }
 }
 temp=arr[i];
 arr[i]=arr[pos];
 arr[pos]=temp;
 }

//DISPLAY
cout<<"resultant array : ";
for(i=0;i<size;i++)
 {
 cout<<"\nvalue : "<<arr[i];
 }
//BINARY SEARCH
int first=0,mid,last=size-1,found=0;
cout<<"Enter value to be searched : ";
cin>>n;
first=arr[0];
last=arr[size-1];
while(first<=last && found==0)
 {
  mid=(first+last)/2;
  if(arr[mid]==n)
   {
    pos=mid;
    found=1    ;
   }
   else if(n<arr[mid])
    last=mid-1;
   else
    first=mid+1;
 }//end of while loop.
if(found==1)
 cout<<"Element found at position : "<<++pos;
else
 cout<<"Unsuccessful Search";
getch();
}