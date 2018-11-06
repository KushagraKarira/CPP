#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int f,c;
char ch,C;
cout<<"Enter any of the choice(C/F) =";
cin>>ch;
if(ch=='C')
{
cout<<"Enter the temp. in Celsius = ";
cin>>c;
f=(c+32)/1.8;
cout<<"Temp. n fahrenheit is = "<<f;
}
else
{ cout<<"You entered wrong value";

}
getch();
}