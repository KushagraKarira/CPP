#include<iostream.h>
#include<conio.h>
void selsort(int a[] , int n);
void main()
{
clrscr();
int i,n,a[50];
cout<<"enter no. of element";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"enetr elements";
cin>>a[i];
}
selsort(a,n);
cout<<"sorted array";
for(i=0;i<n;i++)
{
cout<<a[i];
}
getch();
}
void selsort(int a[],int n)
{
int i,j,min,l,temp;
for(i=0;i<n;i++)
{
min=a[i];
l=i;
for(j=i+1;j<n;j++)
{
if(a[j]<min)
{
min=a[j];
l=j;
}
}
temp=a[i];
a[i]=a[l];
a[l]=temp;
}
}