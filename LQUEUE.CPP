#include<fstream.h>
#include<conio.h>
#define size 10
// Linear queue
#define n 10
int arr[10];
int f=0,r=0;
void add()
{
 int x;

 cout<<"Enter Number "<<endl;
 cin>>x;

 if (r <= n)
 {
  if (r+1 > n)
  {
   cout<<" Queue Full !! "<<endl;
  }
  r = r + 1; //Rear ++
  arr[r] = x;
 }
}
void del()
{
 if (f = r)
 {
  cout<<" Queue Empty "<<endl;
 }
 f = f + 1; //Front++
 arr[f] = 0;
}
main()
{
 clrscr();
 int choice;
 do
 {
  cout<<"       Q U  E U E "<<endl;
  cout<<" 1. Add "<<endl;
  cout<<" 2. Delete "<<endl;
  cout<<" Enter Choice... (1 / 2)"<<endl;
  cin>>choice;

  if (choice == 1)
  {
   add();
  }
  if (choice == 2)
  {
   del();
  }
 } while (choice != 1 || choice != 2);
 getch();
 return 0;
}