#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
int mat[3][3];
clrscr();
for(int i=0; i<3; i++)
{
for(int j=0; j<3; j++)
{
cout<<"Enter Value";
cin>>mat[i][j];
}
}
for(i=0; i<3; i++)
{
for(int j=0; j<3; j++)
{
cout<<mat[i][j];
}
cout<<endl;
}
cout<<endl;
for(i=0; i<3; i++)
{
for(int j=0; j<3; j++)
{
cout<<mat[j][i];
}
cout<<endl;
}
getch();
return 0;
}
