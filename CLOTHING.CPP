#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class Clothing
{
private:
char *Code;
char *Type;
int Size;
char *Material;
float Price;
float Calc_Price();
public:
Clothing()//Default Constructor
{
strcpy(Code,"Not Assigned");
strcpy(Type,"Not Assigned");
strcpy(Material,"Not Assigned");
Size=0;
Price=0;
}
void Enter();
void Show();
};
void Clothing :: Enter()
{
cout<<"Enter the value for Code=>";
gets(Code);
cout<<"Enter the Type=>";
gets(Type);
cout<<"Enter the Size=>";
cin>>Size;
cout<<"Enter the Material=>";
gets(Material);
Price=Calc_Price();
}
float Clothing :: Calc_Price()
{
if(strcmp(Material,"COTTON")==0)
{
if(strcmp(Type,"TROUSER")==0)
Price=1500;
if(strcmp(Type,"SHIRT")==0)
Price=1200;
}
else
{
if (strcmp(Type,"TROUSER")==0)
Price=(1500-(1500*0.25));
else if(strcmp(Type,"SHIRT")==0)
Price=(1200-(1200*0.25));
}
return Price;
}
void Clothing :: Show()
{
cout<<"Code="<<Code<<endl;
cout<<"Type="<<Type<<endl;
cout<<"Size="<<Size<<endl;
cout<<"Material="<<Material<<endl;
cout<<"Price="<<Price<<endl;
}
void main()
{
Clothing c;
clrscr();
c.Enter();
c.Show();
getch();
}


