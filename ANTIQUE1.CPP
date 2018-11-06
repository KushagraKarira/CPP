#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#define N 5  //Number of loops
//P.17 Q-c
class ANTIQUE
{
	private:
	 int ANo;
	 char Aname[10];
	 float price;

	public:
	 void BUY()
	 {
		 cout<<"Enter Antique Number : ";
		 cin>>ANo;

		 cout<<"Enter Antique Name : ";
		 gets(Aname);

		 cout<<"Enter Price : ";
		 cin>>price;
	 }

	 void SHOW()
	 {
		 cout<<ANo<<endl;
		 cout<<Aname<<endl;
		 cout<<price<<endl;
	 }

	 float GetPrice()
	 {
		 return price;
	 }
}ANTIQUE; //ANTIQUE is object of class ANTIQUE

int main()
{
	clrscr();

	char choice;

	fstream finout; //finout is object of fstream //istream+ostream
	finout.open("ANTIQUE.DAT",ios::out);
	do
	{
		ANTIQUE.BUY();

		// Write to file

		finout.write((char*)&ANTIQUE, sizeof(ANTIQUE));


		cout<<"Do you want to continue ? (Y/N) "<<endl;
		cin>>choice;

	}while(choice=='y' || choice=='Y');
	finout.close();
	cout<<" Data successfully written to disk "<<endl;
	int price;
	finout.open("ANTIQUE.DAT",ios::in);
	finout.read((char*)&ANTIQUE, sizeof(ANTIQUE));
	while(!finout.eof())
	{
		price = ANTIQUE.GetPrice();
		if(price>1000 && price<15000)
			ANTIQUE.SHOW();
			finout.read((char*)&ANTIQUE, sizeof(ANTIQUE));


	}
	finout.close();
	getch();
}