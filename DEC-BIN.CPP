//Dec-Bin
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#define size 10
int Dec=1,Bin;
int Dec2Bin();
int Bin2Dec();
int main()
{
int choice;
clrscr();
cout<<"      Enter Choice "<<endl;
cout<<" 1) Decimal to Binary"<<endl;
cout<<" 2) Binary to Decimal"<<endl;
cin>>choice;
if (choice==1)
{
cout<<"    Enter Decimal Vaalue"<<endl;
cin>>Dec;
Dec2Bin();
cout<<"Binary = "<<Bin<<endl;
}
if (choice==2)
{
cout<<"    Enter Binary Value"<<endl;
cin>>Bin;
Bin2Dec();
cout<<"Decimal = "<<Dec<<endl;
}
getch();
return 0;
}
int Dec2Bin()             //Dec2Bin
{
while (Dec!=0)
{
cout<<Dec%2;
Bin=Bin+Dec;
Bin=Bin*10;
Dec=Dec/2;
}
return Bin;
}
int Bin2Dec()             //Bin2Dec
{
//if (Bin==1)
return Dec;
}