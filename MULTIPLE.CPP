//Program to print Multiple of any entered number
#include<iostream.h>
#include<conio.h>
int main()
{
int m,n;
clrscr();
cout<<"Enter any number to print its multiple";
cin>>n;
for(int i=1; i<=10;i++)
{
m=n*i;
cout<<n<<" x "<<i<<" = "<<m<<endl;
}
getch();
return 0;
}


