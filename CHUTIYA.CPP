#include<iostream.h>
#include<conio.h>
void main()
{
 int a,b,c,n;
 clrscr();
 a=0;
 b=1;
 cout<<"\n How many elements =";
 cin>>n;
 cout<<"\n Fibonaacci series =";
 cout<<a<<" "<<b;
 for(int i=2;i<n;++i)
 {
  c=a+b;
  cout<<" "<<c;
  a=b;
  b=c;
 }
 getch();
}

