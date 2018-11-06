#include<iostream.h>
#include<stdio.h>
#include<conio.h>
struct student
{
int rno;
char name[30];
int tmarks;
}s(20);



































































int arr[size];
//Size defined in line 04//
void bubble();
void display();
int main()
{
clrscr();
for (int i=0;i<size;i++)
{
cout<<"Enter Array "<<i+1<<endl;
cin>>arr[i];
}
cout<<"Array reicived successfully"<<endl;
display();
bubble();
clrscr(); //clrscr
cout<<"Sorted array looks like this :"<<endl;
display();
getch();
return 0;
}               //Main Function returned 0
void bubble()   //bubble function define
{
int temp;
for (int i=0;i<size;i++)
{
for (int j=0;j<size;j++)
{if (arr[j+1] < arr[j])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}     //if end
}     //for j end
}    //for i end
getch();
}    //function end
void display() //display function define
{
for (int i=0;i<size;i++)
cout<<"Array "<<i+1<<" = "<<arr[i]<<endl;
getch();
}