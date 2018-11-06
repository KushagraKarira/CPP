#include<iostream.h>
#include<conio.h>
void StatFun()
{
static int a;
cout<<a++;
}
void main()
{
clrscr();
for(int i=1;i<10;i++)
StatFun();
getch();
}