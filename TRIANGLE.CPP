#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{  int b,a,c,s,area;
   clrscr();
   cout<<"enter the a value =";
   cin>> a;
   cout<<"enter the b value =";
   cin>>b ;
   cout<<"enter the c value =";
   cin>>c;
   s=(a+b+c)/2;
   area=sqrt(s*(s-a)*(s-b)*(s-c));
   cout<<area;
   getch();
}


