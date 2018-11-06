#include<stdiostr.h>
#include<conio.h>
void Dec2Bin(int Dec);
int Bin2Dec(int Bin);
int main()
{
clrscr();
int Dec,Bin,choice;
cout<<"                             Menu"<<endl<<endl;
cout<<"                   1. Decimal to binary"<<endl;
cout<<"                   2. Binary to Decimal"<<endl;
cin>>choice;
if (choice==1)
{
cout<<"Enter Decimal Value :"<<endl;
cin>>Dec;
Dec2Bin(Dec);
}
else if (choice==2)
{
cout<<"Enter Binary Value :"<<endl;
cin>>Bin;
cout<<Dec;
Bin2Dec(Bin);
}
else
cout<<"Wromg choice"<<endl<<"Enter 1 or 2"<<endl;
getch();
return 0;
}
void Dec2Bin(int Dec)
{
while (Dec!=0)
{
cout<<Dec%2;
Dec=Dec/2;
getch();
}
}
int Bin2Dec(int Bin)
{
int Dec;
Dec=Bin%10;
Bin=Bin/10;
while (Bin!=0)
{
if(Bin%10==1)
{
Dec*2+1;
Bin=Bin/10;
}
else
{
Dec*2;
Bin=Bin/10;
}
}
getch();
return Dec;}