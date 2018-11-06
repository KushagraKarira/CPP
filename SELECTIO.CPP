#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>

//Selection sort

int i,j=0;
int arr[10];
int swap(int&a,int&b)
{
 int temp;
 temp=a;
 a=b;
 b=temp;
 return (a,b);
}

void disp()
{
 for (i=0;i<9;i++)
 {
  cout<<"Array "<<i+1<<" = "<<arr[i]<<endl;
 }
}
int main()
{
 clrscr();
 for(i=0;i<9;i++)
 {
  cout<<"Enter array value"<<i+1<<endl;
  cin>>arr[i];
 }

 int sml,pos;

 for(i=0; i<9-1; i++)
 {
  pos=i;
  sml=arr[i];

  for (j=i;j<9;j++)
  {
   if (arr[j]<sml)
   {
    sml=arr[j];
    pos=j;
   }
  }
  swap(arr[i], arr[pos]);
 }

 disp();

 getch();
 return 0;
}