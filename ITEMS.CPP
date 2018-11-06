#include<fstream.h>
#include<conio.h>
#include<stdio.h>

class ITEM
{
 private:
	  int code;
	  char Iname[40];
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
	void GetStock()
	{
	 cout<<"\nEnter the Code = ";
	 cin>>code;
	 cout<<"\nEnter the Item Name = ";
	 gets(Iname);
	 cout<<"\nEnter the Price = ";
	 cin>>price;
	 cout<<"\nEnter the Quantity = ";
	 cin>>qty;
	 GetOffer();
	}
	void Showitems()
	{
	  cout<<"Code : ";
	 cout<<code;
	  cout<<"\nItem name : ";
	  cout<<Iname;
	  cout<<"\nPrice : ";
	  cout<<price;
	  cout<<"\nQuantity : ";
	  cout<<qty;
	}
};

void main()
{
 char z;
 clrscr();
 ITEM p ;
 ofstream fin;
 fin.open("Items.dat",ios::binary|ios::app);
 p.GetStock();
 fin.write((char*)&p,sizeof(p));
 fin.close();
 ifstream fout;
 fout.read((char*)&p,sizeof(p));
 p.Showitems();
 getch();

}



