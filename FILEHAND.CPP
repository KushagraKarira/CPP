#include<fstream.h>
#include<conio.h>
#include<string.h>

class Student
{
 private:
  char name[30], number[10];
 public:
  void enter()
  {
   cout<<"Enter name : ";
   cin.get(name, 30);

   cout<<"Enter number :";
   cin.get(number, 10);
  }
}stud;

main()
{
 clrscr();
 char choice= 'y';

 while (choice == 'Y' || 'y' );
 {
  stud.enter();
  cout<<"Do you want to continue ? (Y/N)"<<endl;
  cin>>choice;
 }

 ofstream fout;
 fout.open("binary.dat", ios::app);
 fout.write( (char*)&stud, sizeof(stud) );
 fout.close();

 ifstream fin;
 fin.open("binary.dat", ios::app);
 while( !fin.eof() )
 {
  fin.read((char*)&stud, sizeof(stud));
 }
 fin.close();

 getch();
 return 0;
}