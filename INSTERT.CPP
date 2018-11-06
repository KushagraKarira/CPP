#include<iostream.h>
#include<conio.h>

int main()
{
 clrscr();

 int temp,i,j,arr[10];

 for(i=0; i<10; i++)      //Enter Array
 {
  cout<<"Enter Array "<<i+1<<" "<<endl;
  cin>>arr[i];
 }

 for(i=1; i<10; i++)
 {
  temp = arr[i];
  j = i + 1;

  while( temp <= arr[j] && j<=0 )
  {

  }
 }

 for(i=0; i<10; i++)      //Display Array
 {
  cout<<"Array = "<<arr[i]<<endl;
 }
 getch();
 return 0;
}