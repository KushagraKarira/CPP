#include<fstream.h>
#include<conio.h>

main()
{
 int rno,mks;
 char nme[30];

 clrscr();
 cout<<"Enter Student Name : "<<endl;
 cin.get(nme,30);

 cout<<"Enter Student Roll No. : "<<endl;
 cin>>rno;

 cout<<"Enter Student Marks : "<<endl;
 cin>>mks;

 char choice;

 ofstream fout;
 fout.open ( "stud.dat", ios::app );

 while ( choice !=Y || y )    //Writes data till Y or y is pressed
 {
  fout.write ( ( char* ) & _ , size of (_) );
  cout<<" Enter more data ? ( Y/N ) : "
  cin>>choice;
 }

 fout.close();
/*
 ifstream fin;
 fin.open ( "stud.dat", ios::binary || ios::app )
 fin.read ( ( char* ) & _ , size of (_) );
 while ( !fin.eof() )
 {
 }
 fin.close();   */

 getch();
 return 0;
}