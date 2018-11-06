#include<iostream.h>
#include<conio.h>
#include<math.h>
int Bin2Dec(int n);
void Dec2Bin(int m);
void main()
{
int dec=0;
int bin=0;
int ch;
clrscr();
do
{
cout<<"\t\t\nMenu\n";
cout<<"\n\n1.Bin2Dec\n";
cout<<"\n\n2.Dec2Bin\n";
cout<<"\n\n3.Exit\n";
cout<<"\n\nEnter your Choice=>\n";
cin>>ch;
switch(ch)
{
case 1:
cout<<"Enter the Binary Number";
cin>>bin;
dec=Bin2Dec(bin);
cout<<"Binary Number="<<dec;
break;
case 2:
cout<<"Enter the Decaimal Number";
cin>>dec;
Dec2Bin(dec);
break;
}
}while(ch!=3);
getch();
}
void Dec2Bin(int m)
{
int n;
int row=10;
int col=45;
while(m!=0)
{
n=m%2;
gotoxy(col--,row);
cout<<n;

m/=2;
}
getch();
}
int Bin2Dec(int n)
{
int m,i=0;
int res=0;
while(n!=0)
{
m=n%10;
res+=m*pow(2,i++);
n=n/10;
}
return res;
}
