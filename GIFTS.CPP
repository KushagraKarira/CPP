#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
// P.7 - ANNUAL EXAMINATION PAPERS - 2016
class GIFTS
{
 private:
  int ID;
  char GIFT[20];
  float Price;
 public:
  char Remarks[20];
  void Takeonstock()
  {
   cin>>ID;
   gets(GIFT);
   gets(Remarks);
   cin>>Price;
  }

  void See()
  {
   cout<<ID<< ":" <<GIFT<< ":" <<Price<< ":" <<Remarks<<endl;
  }
}Gift;

void BUMPER()
{
 fstream inf;

 inf.open("GIFTS.DAT",ios::in);
 inf.read( (char*)&Gift, sizeof(Gift) );
 while(inf)
 {
  if (strcmpi(Gift.Remarks,"DISCOUNT")==0)
   Gift.See();
   inf.read( (char*)&Gift, sizeof(Gift) );

 }

 inf.close();
}

int main()
{
 clrscr();
 Gift.Takeonstock();
 fstream outf;
 outf.open ("GIFTS.DAT", ios::out);

 char choice='Y';

 while(choice=='Y')
 {
  outf.write( (char*)&Gift, sizeof(Gift) );
  cout<<endl;
  BUMPER();
  cout<<"Do you want to continue (Y/N) ?";
  cin>>choice;
 }

 outf.close();
 getch();
 return 0;
}