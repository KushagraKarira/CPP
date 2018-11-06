#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,temp,n,POS=0,small;
int ARR[20];
clrscr();
cout<<"enter size of array"<<endl;
cin>>n;
for(i=0;i<n;i++)
{
cout<<"enter element"<<endl;
cin>>ARR[i];
}
for(i=0;i<n-1;i++)
{
small=ARR[i];
POS=i;
for(j=i+1;j<n;j++)
{
if(ARR[j]<small)
{
small=ARR[j];
POS=j;
}
}
temp=ARR[i];
ARR[i]=ARR[POS];
ARR[POS]=temp;
}
cout<<"the sorted array is"<<endl;for(i=0;i<n;i++)
cout<<ARR[i]<<endl;
getch();
}


