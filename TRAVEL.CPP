#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class travel
{
long travelcode;
char *place;
int number_of_travellers;
int number_of_buses;
public:
void newtravel();
void showtravel();
travel();
};
travel::travel()
{
travelcode=201;
strcpy(place,"naintal");
number_of_travellers=10;
number_of_buses=1;
}
void showtravel();
void travel::newtravel()
{
cout<<"enter travel code,place and number_of_travellers";
cin>>travelcode;
gets(place);
cin>>number_of_travellers;
if (number_of_travellers<20)
number_of_buses =1;
else if(number_of_travellers<40)
number_of_buses=2;
else if (number_of_travellers>40)
number_of_buses=3;
}
void  travel::showtravel()
{
cout<<"travelcode="<<travelcode<<endl;
cout<<"place="<<place<<endl;
cout<<"number_of_travellers="<<number_of_travellers<<endl;
cout<<"number_of_buses="<<number_of_buses<<endl;
}
void main()
{
travel t;
clrscr();

t.newtravel();
t.showtravel();
}





