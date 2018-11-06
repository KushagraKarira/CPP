/* Wap in C++ to read file “sports.dat” and copy only those records where event name is ATHLETIC using the concept of Data file handling */

#include<fstream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct sports {
		 char event[20];
		 char participants[10][30];
		 int no_of_participants;
	      } s[20], s2[20];

void copy(fstream &ob);

int i=0;

void main()
{
clrscr();
char choice;
fstream ob("sports.dat",ios::binary|ios::in|ios::out);
do
{
if(i>0)
cin.get();

cout<<"\n\nEnter the name of Event : ";
cin.getline(s[i].event,20);

cout<<"\n\nEnter the total number of participants in Event "<<s[i].event<<" : ";
cin>>s[i].no_of_participants;

cout<<"\n\nEnter the name of Praticipants : \n";
cin.get();

for(int j=0; j<s[i].no_of_participants; j++)
cin.getline(s[i].participants[j],30);
ob.write((char*)&s[i], sizeof(sports));

cout<<"\n\n\nWant to Enter Details of Another Event (Y/N) : ";
cin>>choice;
i++;
} while(choice=='y'||choice=='Y');

cout<<"\n\n\n\n\n************************************************************************************************************\n\n";

copy(ob);

cout<<"\n\n*****************************************************************************************************************\n\n\n";
getch();
}

void copy(fstream &o)
{
sports s[20];
o.seekg(0);

ofstream file;
file.open("athletic.dat",ios::binary);
file.seekp(0);

int j,n=0;
int c=0;

while(o)
{
   o.read((char*)&s[c], sizeof(sports));

   if(strcmp("athletic",s[c].event)==0)
	{
		file.write((char*)&s[c], sizeof(sports));
		n=1;
		break;
	}
   c++;
}

if(n==0)
{
cout<<"\n\nUnsuccessful Search.";
getch();
exit(0);
}

o.close();
file.close();


sports sp;

ifstream oo;
oo.open("athletic.dat",ios::binary);

while(oo)
{
	oo.read((char*)&sp, sizeof(sports));

}

cout<<"\n\nThe Records of file are : \n\n";

cout<<"\n\nEvent = "<<sp.event;

cout<<"\n\n\n\nThe Participants are : \n\n";
for(int i=0; i<sp.no_of_participants; i++)
{
cout<<sp.participants[i]<<"\n\n";
}

oo.close();

remove("athletic.dat");
remove("sports.dat");

}















Output : 

Enter the name of Event : Cricket

Enter the total number of participants in Event Cricket : 3

Enter the name of Praticipants :
Rahul verma
Shivam
Siddharth


Want to Enter Details of Another Event (Y/N) : y


Enter the name of Event : athleltic

Enter the total number of participants in Event atlhletic : 2

Enter the name of Praticipants :
Mohak
Vikas


Want to Enter Details of Another Event (Y/N) : y


Enter the name of Event : Football

Enter the total number of participants in Event Football : 2

Enter the name of Praticipants :
Arsh
Ashu

Want to Enter Details of Another Event (Y/N) : n

*********************************************************************************************************************************
The Records of file are :

Event = athletic
The Participants are :
Mohak
Vikas
*********************************************************************************************************************************
