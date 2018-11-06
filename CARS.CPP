#include<fstream.h>
#include<conio.h>
#include<stdio.h>

class CAR
{
	int C_NO;
	char C_Name[20];
	float milage;
public:
	void enter()
{
	cin>>C_NO;
	gets(C_Name);
	cin>>milage;
}
	void display()
{
	cout<<C_NO<<' ';
	cout<<C_Name<<' ';
	cout<<milage<<endl;
}
	int RETURN_MILAGE()
{
	return milage;
}
}	C;
	void CARS()
{
	char ch='y';
	ofstream fout;
	fout.open("CAR.DAT")              ;
	do
{
	cout<<"enter records"<<endl;
	C.enter();
	fout.write((char*)&C,sizeof(C));
	cout<<"do u wnat to enter more records?"<<endl;
	cin>>ch;
}	while(ch=='y'||ch=='Y');
	fout.close();
}

	void CAR()
{
	ifstream fin;
	fin.open("CAR.DAT",ios::app);
	fin.read((char*)&C,sizeof(C));
	while(!fin.eof())
{
	if(C.RETURN_MILAGE() > 100 && C.RETURN_MILAGE() < 150)
	C.display();
	fin.read((char*)&C,sizeof(C));
}
	fin.close();

}
	void main()
{
	clrscr();
	//CARS();
	CAR();
	getch();
}