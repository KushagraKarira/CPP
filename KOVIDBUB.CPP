#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#define size 10
int arr [size];
void bubble();
void display();
void main()
{
clrscr();
for(int i=0;i<size;i++)
{
 cout<<"ENTER ARRAY --> "<<i+1<<endl;
 cin >>arr[i];
 }
 cout<<"ARRAY RECEIVED SUCCESSFULLY "<<endl;
 display();
 bubble();
 clrscr();
 cout<<"SORTED ARRAY LOOKS LIKE THIS  :"<<endl;
 display();
 getch();

}
void bubble()
{
int temp;
for (int i=0;i<size;i++)
{
for (int j=0;j<size;j++)
{
if (arr[j+1] < arr[j])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
getch();
}
void display()
{
for (int i=0;i<size;i++)
cout<<"ARRAY "<<i+1<<"==> "<<arr[i]<<endl;
getch();
}