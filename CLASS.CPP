#include<iostream.h>
#include<conio.h>
class sum
{ private:
int num1;
int num2;
int sum;
public:
void Enter(){cout<<"enter two values=";cin>>num1>>num2;}
void Disp(){sum=num1+num2;cout<<"sum="<<sum;}
};
sum data;
void main()
{
clrscr();
data.Enter();
data.Disp();
getch();
}
