#include<iostream.h>
#include<conio.h>
#include<stdio.h>

  class BOOK{
	     private:
		      int bookno;
		      char booktitle[20];
		      float Price;
		      float TotalCost(int N)
		      {float Total;
		       Total=N*Price;
		       return Total;
		       }

	     public:
		    void INPUT()
		     { cout<<"Enter book number:"<<endl;
		       cin>>bookno;
		       cout<<"Enter book title:"<<endl;
		       gets(booktitle);
		       cout<<"Enter price:"<<endl;
		       cin>>Price;
		       }

		     void PURCHASE()
		      { int n;
			float Tot;
			cout<<"Enter the number of books to be purchase:"<<endl;
			cin>>n;
			Tot=TotalCost(n);
			cout<<"Total amount is:"<<Tot<<endl;
		      }
		      };

		      void main()
		      { clrscr();
			BOOK b;
			b.INPUT();
			b.PURCHASE();
			getch();
		      }