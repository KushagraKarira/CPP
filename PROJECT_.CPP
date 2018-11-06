#include<iostream.h>
#include<stdio.h>
#include<process.h>
#include<conio.h>
#include<fstream.h>

void box(int x,int y,int width,int height)
 {
 int i,j;
 //Clear the space.
 for(j=y;j<y+height;j++)
 for(i=x;i<x+width;i++)
  {
  gotoxy(i,j);cputs(" ");
  }
 //Draw the box
 for(i=x+1;i<x+width;i++)
  {
  gotoxy(i,y);cputs("Í");
  gotoxy(i,y+height);cputs("Í");
  }
 for(i=y+1;i<y+height;i++)
  {
  gotoxy(x,i);cputs("º");
  gotoxy(x+width,i);cputs("º");
  }
 //The Conners
 gotoxy(x,y);cputs("É");
 gotoxy(x+width,y);cputs("»");
 gotoxy(x,y+height);cputs("È");
 gotoxy(x+width,y+height);cputs("¼");
 }



class gym
 {
	int id;
	char name[20],sub[10];
	public:
	int getid()
	  {
	    return id;
	  }

	void input()
	  {
		clrscr();
		box(1,1,40,6);
		gotoxy(3,2);cout<<"Enter Trainee ID: ";
		cin>>id;
		gotoxy(3,3);cout<<"Enter Trainee Name: ";
		cin>>name;
		gotoxy(3,4);cout<<"Enter Trainee subcription: ";
		cin>>sub;
	  }

	void display()
	  {

		cout<<"\n==============================";
		cout<<"\nTrainee ID :"<<id;
		cout<<"\nTrainee Name :"<<name;
		cout<<"\nTrainee subcription :"<<sub;

	  }
};


void main()
{
	gym g;
	int n;
	ifstream fin;
	ofstream fout;
	clrscr ();
	while(1)
	{
		clrscr ();
		box(1,1,24,2);
		gotoxy(9,2);cout<<"Menu";
		box(1,4,24,6);
		gotoxy(3,5);cout<<"1.Insert";
		gotoxy(3,6);cout<<"2.Deleat";
		gotoxy(3,7);cout<<"3.Update";
		gotoxy(3,8);cout<<"4.Display";
		gotoxy(3,9);cout<<"5.Exit";
		box(1,11,24,2);
		gotoxy(3,12);cout<<"Enter your choice : ";
		cin>>n;

		switch(n)
		{
			case 1:
			fout.open("gym",ios::app|ios::binary);
			g.input();
			fout.write((char*)&g,sizeof(g));
			fout.close();
			break;

			case 2:
			fin.open("gym",ios::binary);
			fout.open("gym 1");
			cout<<"\nEnter Trainee ID for deletion:";
			cin>>n;
			while(fin.read((char*)&g,sizeof(g)))
			{
				if(n!=g.getid())
				fout.write((char*)&g,sizeof(g));
			}
			fout.close();
			fin.close();
			remove("gym");
			rename("gym 1","gym");
			break;

			case 3:
			fin.open("gym",ios::binary);
			fout.open("gym 1");
			cout<<"\nEnter Trainee ID for updation:";
			cin>>n;
			while(fin.read((char*)&g,sizeof(g)))
			{
				if(n!=g.getid())
				fout.write((char*)&g,sizeof(g));
				else
				{
					cout<<"\nEnter new details for Trainee\n\n";
					g.input();
					fout.write((char*)&g,sizeof(g));
				}

			}
			fout.close();
			fin.close();
			remove("gym");
			rename("gym 1","gym");
			break;

			case 4:
			fin.open("gym",ios::binary);
			while (fin.read((char*)&g,sizeof(g)))
			g.display();
			break;

			case 5:
			exit(1);

		}

	getch();
	}

}

