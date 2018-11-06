/* Wap in c++ to create a binary file and write objects of class BOOK to it and display them on screen after reading from the file. */

#include<fstream.h>
#include<conio.h>
int p;
class book { 
int book_no;
	     	char book_title[80];
	     	float price;

	     	float total_cost(int n)
	     	{
	       		float p;
	       		p=n*price;
	       		return p;
	     	}

	     public :

	     void input()
	     	{
	     		cout<<"\n\nEnter Book no. : "; cin>>book_no;
	     		cout<<"\n\nEnter book title : ";
	     		cin.get();
	     		cin.getline(book_title,80);
	     		cout<<"\n\nEnter book price : "; cin>>price;
	   	 }	

	    void purchase()
	    	{
	    		cout<<"\n\nEnter number of copies to be purchased : "; cin>>p;
	    		cout<<"\n\nTotal cost (in Rs ) = "<<total_cost(p)<<"\n\n\n";
	    	}

	    void display()
	    	{
	    		cout<<"\n\nBook title is : "<<book_title;
	    		cout<<"\n\nBook number is : "<<book_no;
	    		cout<<"\n\nPrice of book is : "<<price;
	    		cout<<"\n\nTotal cost of "<<p<<" books => "<<total_cost(p)<<" Rs\n\n\n\n";
	    	}

      };

void main()
{clrscr();
book b[3],p[3];

fstream bo;
cout<<"---------------------------------------------------------Enter Details--------------------------------------------------------------\n";

for(int i=0; i<3; i++)
      {
	b[i].input();
	b[i].purchase();

	bo.open("xy.txt",ios::out|ios::binary); // Writing to the binary file
	bo.write((char *)&b[i],sizeof(b[i]));
	bo.close();

	bo.open("xy.txt",ios::in |ios::binary);  //Reading from the binary file. See the object is ‘p’ and not ‘b’
	bo.read((char *)&p[i], sizeof(p[i]));    // It is not  mandatory to have different objects of a class 
	bo.close();
      }

cout<<"\n\n--------------------------------------------------- Book Details -----------------------------------------------------------------“;


for(i=0; i<3; i++)
{

		p[i].display();

}


getch();
}




















































Output:

--------------------------------------------------------------------- Enter Details -------------------------------------------------------------------

Enter Book no. : 1

Enter book title : H.C verma

Enter book price : 200

Enter number of copies to be purchased : 5

Total cost (in Rs ) = 1000



Enter Book no. : 2

Enter book title: Sumita arora

Enter book price: 250

Enter number of copies to be purchased: 5

Total cost (in Rs) = 1250



Enter Book no. : 3

Enter book title : R.D sharma

Enter book price : 250

Enter number of copies to be purchased : 2

Total cost (in Rs ) = 500


------------------------------------------------------------------ Book Details -----------------------------------------------------------------

Book title is : H.C verma

Book number is : 1

Price of book is : 200

Total cost of 2 books => 400 Rs


Book title is : Sumita arora

Book number is : 2

Price of book is : 250

Total cost of 2 books => 500 Rs


Book title is : R.D sharma

Book number is : 3

Price of book is : 250

Total cost of 2 books => 500 Rs






