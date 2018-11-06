//      CS PRACTICALS //
// NAME- AFSHA ANSARI//
// 11 D //
//program that accepts three values and print the roots & nature of the root//
#include<conio.h>
#include<iostream.h>
#include<math.h>
void main()
{
int b,c,a,d,root1,root2;
clrscr();
cout<<"enter the value of a,b,c in ax^+by+c=";
cin>>a>>b>>c;
d=b*b-4*a*c;
{
if(d==0)
cout<<"/n Roots are real and equal";
cout<<"/n roots"<<root1<<root2;
if(d>0)
{
cout<<"/n Roots are real and unequal";
cout<<"/n roots"<< root1<<root2;
  root1=-b+sqrt(d)/2*a;
  root2=-b-sqrt(d)/2*a;
if(d<0)
 cout<<"/n Roots does not exist";
}
}
}

