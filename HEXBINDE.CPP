#include<iostream.h>
#include<stdio.h>
#include<conio.h>
long int choice,Oct,Dec;
long long int Bin;
char Hex;
int Bin2Dec();
int Dec2Bin();
int Hex2Bin();
int Bin2Hex();
int Oct2Bin();
int Bin2Oct();
int main()
{
cout<<"------------------------------"<<endl;
cout<<"           M E N U            "<<endl;
cout<<"------------------------------"<<endl;
cout<<" 1. Binary to Decimal"<<endl;
cout<<" 2. Decimal to Binary"<<endl;
cout<<" 3. Hexadecimal to Binary"<<endl;
cout<<" 4. Binary to Hexadecimal"<<endl;
cout<<" 5. Octal to Binary"<<endl;
cout<<" 6. Binary to Ocatal"<<endl<<endl;
cout<<"Enter Choice : ";
cin>>choice;
if(choice==1){Bin2Dec(); cout<<"Enter Binary "<<endl; cin>>Bin;
else if(choice==2){Dec2Bin(); cout<<"Enter Decimal "<<endl; cin>>Dec;
else if(choice==3){Hex2Bin(); cout<<"Enter Hexadecimal "<<endl; cin>>Hex;
else if(choice==4){Bin2Hex(); cout<<"Enter Binary "<<endl; cin>>Bin;
else if(choice==5){Oct2Bin(); cout<<"Enter Octal "<<endl; cin>>Oct;
else if(choice==6){Bin2Dec(); cout<<"Enter Binary "<<endl; cin>>Bin;
else cout<<"   Wrong Choice  ";
getch();
return 0;
}
int Bin2Dec()
{
while(Bin==0)
{


}
}