#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>
class consumer
{
private :
char c_name[20];
char c_address[30];
char area[25];
char c_phone_no[15];

public :
void ledger()
{
cout<<"enter name of consumer ";
gets(c_name);
cout<<"enter address of consumer ";
gets(c_address);
cout<<"enter area ";
gets(area);
cout<<"enter phone no.";
gets(c_phone_no);
};

void disp()
{
cout<<"name"<<c_name<<endl;
cout<<"address"<<c_address<<endl;
cout<<"area"<<area<<endl;
cout<<"phone no. "<<c_phone_no<<endl;
};
int checkcode(char ac[])
{
return strcmp(area,ac);
}
};
consumer(consumer&c)
{
a=c.a;
strcpy(b,c.b);
}
