#include<fstream.h>
#include<conio.h>
#include<stdio.h>
class Antique
{
int ANo;
char Aname[10];
float price;
public:
void Buy()
{
cin>>ANo;gets(Aname);cin>>price;
}
void show()
{
cout<<ANo<<endl;
cout<<Aname<<endl;
cout<<price<<endl;
}
float Getprice()
{
return price;
}
}A;
void Anti()
{
char ch;
ofstream fout;
fout.open("Antique.Dat",ios::app);
do{
A.Buy();
fout.write ((char*)&A, sizeof (A));
cout<<"enter another record=>";
cin>>ch;
}while (ch=='y'||ch=='Y');
fout.close();
}
void Antib()
{
ifstream fin;
fin.open("antique.dat");
fin.read((char*) &A,sizeof(A));
while(!fin.eof())
{
if(A.Getprice()>=10000&&A.Getprice()<=15000)
A.show();
fin.read((char*)&A,sizeof (A));
}
fin.close();
}
void main()
{
clrscr();
Anti();
Antib();
getch();
}