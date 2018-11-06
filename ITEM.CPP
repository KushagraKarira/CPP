#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
class Item
{
private:
       int Code;
       char Iname[20];
       float price;
       int qty;
       float offer;
       void GetOffer()
       {
	if(qty<=50)
	  offer=0;

	else if(qty>50 && qty<=100)
	   offer=5;

	else if(qty>100)
	  offer=10;
       }

public:
       void Getstock()
       {
	 cout<<"Enter the Code:";
	 cin>>Code;
	 cout<<"Enter the Iname:";
	 gets(Iname);
	 cout<<"Enter the price:";
	 cin>>price;
	 cout<<"Enter the quantity:";
	 cin>>qty;


       GetOffer();
       }
       void Showitems()
       {
       cout<<"code="<<Code<<endl;
       cout<<"Item name="<<Iname<<endl;
       cout<<"price="<<price<<endl;
       cout<<"quantity="<<qty<<endl;
       }
}i;
void main()
{
clrscr();
fstream A;
char ch;
cout<<"do you want to enter(P) or retrieve(Q)\n for search(R)";
cin>>ch;
switch(ch)
{
 case 'P':
	  A.open("Items.dat",ios::binary|ios::out|ios::app);
	  char x='Y';
	  while(x=='Y')
	  {
	  i.Getstock();
	  A.write((char*)&i,sizeof(i));
	  cout<<"Do you want to enter more records(Y\N):";
	  cin>>x;
	  }
	  A.close();
	  break;
 case 'Q':
	  A.open("Items.dat",ios::binary|ios::in);
	  while( A.read((char*)&i,sizeof(i)))
	 {
	 i.Showitems();
	}
	  A.close();
 case 'R':
	  A.open("Items.dat",ios::binary|ios::in);

}
getch();
}




































