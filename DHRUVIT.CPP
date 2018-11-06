#include<iostream.h>
#include<conio.h>
#include<string.h>
class PIC
{
int Pno;            // Data Member for Picture Number(an integer)
char Category[50];   // Data Member for Picture category(a string)
char Location[50];  // Data Member for Exhibition location( a string)
void FixLocation(); // Member Function for Assigning Exhibition location

public:
void Enter();
void SeeAll();
}p;

void PIC :: FixLocation() // Member Function to assign Location
{
if(strcmp(Category,"Classic")==0)
strcpy(Location,"Amina");
else if(strcmp(Category,"Modern")==0)
strcpy(Location,"Jim Plaq");
else
strcpy(Location,"Ustad Khan");
}

void PIC :: Enter() // Member Function for user to Enter Values
{
cout<<"Enter Picture Number:";
cin>>Pno;
cout<<"\nEnter Picture Category:";
cin>>Category;
}

void PIC :: SeeAll() // Member Function display Data;
{
cout<<"Picture Number:"<<Pno<<endl;
cout<<"Picture Category:"<<Category<<endl;
cout<<"Location:"<<Location;
};

void main()
{
clrscr();
p.Enter();
p.SeeAll();
getch();
}



