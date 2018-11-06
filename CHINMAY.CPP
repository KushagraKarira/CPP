// WAP that creates a function BSearch() stores n values in an array and serach any value using binary search.
// Chinmay Rawal
// XI E

#include<iostream.h>
#include<conio.h>
int Binary_search (int A[] , int n , int p);//Declaration
void main()
{
clrscr();
int A[50],n,p,loc;
cout<<"Enter the size of the array: " ;
cin>>n;

cout<<"\n\n Enter the elements : \n\n " ;
for(int i=0;i<n;i++)
cin>> A[i];

cout<<"\n\n array formed is : " ;
for( i=0;i<n;i++)
cout<< A[i] ;

cout<<"\n\n Enter the element to be searched : " ;
cin>>p;



loc=Binary_search (A,n,p);
if(loc>-1)

getch();

}
int Binary_search (int A[] , int n , int p)
{   int first,last,mid,found=0,pos=-1;
  first=0; last=n-1;
  while(first<=last && found==0)
  {
  mid=(first+last)/2;
  if(A[mid]==p)
  {
  pos=mid;
  found=1;
  }
  if(p<A[mid])
  last=mid-1;
  else
  first=mid+1;
  }
  return pos;
  }









