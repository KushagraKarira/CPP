#include<iostream.h>
#include<conio.h>
void sortarr(int arr[],int);
void merg(int arr1[],int arr2[],int ,int ,int res[]);
void main()
{
int arr1[50],arr2[50],res[100];
int n,m;
clrscr();
cout<<"Enter size of first array=>";
cin>>n;
cout<<"Enter first array=>";
for (int i=0;i<n;i++)
cin>>arr1[i];
cout<<"Enter size of second array=>";
cin>>m;
cout<<"Enter second array=>";
for (i=0;i<m;i++)
cin>>arr2[i];
sortarr(arr1,n);
sortarr(arr2,m);
cout<<"sorted array 1=>";
for (i=0;i<n;i++)
cout<<arr1[i];
cout<<"sorted array 2=>";
for (i=0;i<m;i++)
cout<<arr2[i];
merg(arr1,arr2,n,m,res);
cout<<"Merged array=>";
for (i=0;i<(m+n);i++)
cout<<res[i];
getch();
}
void sortarr(int arr[],int n)
{
int temp=0;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
}
void merg(int arr1[],int arr2[],int n,int m,int arr3[])
{
int ptr1,ptr2,ptr3;
ptr1=ptr2=ptr3=0;
while(ptr1<n && ptr2<m)
{
if(arr1[ptr1]<arr2[ptr2])
{
arr3[ptr3]=arr1[ptr1];
ptr1++;
ptr3++;
}
else
{
arr3[ptr3]=arr2[ptr2];
ptr2++;
ptr3++;
}
}
while(ptr1<n)
{
arr3[ptr3]=arr1[ptr1];
ptr1++;
ptr3++;
}
while(ptr2<m)
{
arr3[ptr3]=arr2[ptr2];
ptr2++;
ptr3++;
}
}