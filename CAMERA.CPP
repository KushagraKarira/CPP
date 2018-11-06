#include<fstream.h>
#include<conio.h>
#include<stdio.h>
class CAMERA
{
long Model_No;
float MegaPixel;
int Zoom;
char Details[120];
public:
void enter(){cout<<"Enter Model No.=>"<<endl<<"Enter Megapixels=>"<<endl<<"Enter Zoom=>"<<endl<<"Enter Details=>"<<endl;cin>>Model_No>>MegaPixel>>Zoom;gets(Details);}
void display(){cout<<Model_No<<MegaPixel<<Zoom<<Details<<endl;}
long GetModel_No(){return Model_No;}
}c;
void create()
{
char ch;
ofstream fout;
fout.open("Camera.dat",ios::app|ios::binary);
do
{
c.enter();
fout.write((char*)&c,sizeof(c));
cout<<"Do you want to continue(Y/N).";
cin>>ch;
}
while (ch=='Y'||ch=='y');
fout.close();
}
void show()
{
long mno;
cout<<"Enter Model No. to be searched=>";
cin>>mno;
ifstream fin;
fin.read((char*)&c,sizeof(c));
while(fin)
{
if(c.GetModel_No()==mno)
{
void display();
fin.read((char*)&c,sizeof(c));
}
}
fin.close();
}
void main()
{
clrscr();
create();
show();
getch();
}