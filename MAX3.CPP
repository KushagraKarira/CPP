//Program to print maximum out of 3 entered numbers
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float a,b,c,max;
cout<<"Enter three Values";
cin>>a>>b>>c;
if (a>b)
{
if(a>c)
max=a;
else max=c;
}
else
{
if (b>c)
max=b;
else
max=c;
}
cout<<max;
getch();
}
