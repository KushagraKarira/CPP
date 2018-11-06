#include<iostream.h>
#include<conio.h>
void main()
{  clrscr();
   int a[5];
 cout<<"enter array=";
 for(int i=0;i<5;i++)
 cin>>a[i];
 int  loc=a[0];
 for(i=1;i<5;i++)
 if(loc<a[i])
 loc=a[i];
 cout<<"max="<<loc;
 getch();
 }