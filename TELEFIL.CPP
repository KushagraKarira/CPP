#include<fstream.h>
#include<stdio.h>
#include<conio.h>
class Directory
{
private:
char name[20];
char address[30];
char AreaCode[5];
char Phone_Code[15];
public:
void Register()
{
cout<<"Enter name";
gets(name);
cout<<"Enter address";
gets(address);
cout<<"enter areacode";
gets(AreaCode);
cout<<enter ph code";
gets(Phone_Code);
}
void Show()
{
cout<<name<<" "<<address<<" "<<AreaCode<<" "<<Phone_Code<<endl;
}
int CheckCode(char AC[])
{
return strcmp(AreaCode,AC);
}
}d;
void write()
{
char ch;
ofstream fout;
fout.open("TELEBACK.DAT");
do
{
d.Input();
fout.write((char*)&d,sizeof(d));


