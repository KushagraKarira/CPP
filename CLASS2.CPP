 #include<fstream.h>
 #include<conio.h>
 #include<stdio.h>
 class ANTIQUE
 {
 int ANo;
 char Aname[10];
 float price;
 public:
     void BUY()
/     {
     cout<<"number of antique";
     cin>>ANo;
     cout<<"name of antique \n" ;
     gets(Aname);
     cout<<"price of antique\n";
     cin>>price;
     void SHOW()
     {
     cout<<ANo<<endl;
     cout<<Aname<<endl;
     cout<<price<<endl;
     }
     float Getprice()
     { return price;}
     }ANTIQUE A;
     void CREATE()
     {
     ofstream fout("ANTIQUE.DAT");
     char ch;
     do
     {
     void BUY()
     cout<<"Enter recordS"<<endl;
     A.enter();
     fout.write((char*)&A,sizeof (A));
     cout<<"next record(y/n)"<<endl;
     cin>>ch;
     }
     while(ch==y||ch==Y);
     fout.close();
     }
     void SEARCH DETAILS()
     {
     ifstream.fin("ANTIQUE.DAT");
     fin.read((char*)&A,sizeof(A);
     while(!fin.eof())
     {
     if(A.SEARCH DETAIL()>10000 && A.SEARCH DETAILS()<15000)
     A.SHOW();
     fin.read((char*)&A,sizeof(A));
     }
     void main()
     {

     clrscr();
     CREATE();
     SEARCH DETAILS();
     getch();
     }