#include<iostream.h> `
#include<conio.h>
#include<math.h>
#include<stdio.h>
void main()
{
clrscr();
char ch='a';
for(int i=1;i<=5;i++)
{
for(int j=1;j<=i;j++)
cout<<ch++<<"\t";
}
cout<<"\n";
getch();
}