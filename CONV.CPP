#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int mat[4][4],arr[16],i,j;
cout<<"Enter Matrix = ";
for(i=0;i<4;i++)
{
 for(j=0;j<4;j++)
 {
 cout<<"Enter value = ";
 cin>>mat[i][j];
 }
} cout<<"\nConverting to list = \n";
for(i=0,j=0;i<16;i++,j++)
{
arr[i]=mat[i][j];
cout<<arr[i]<<' ';      cout<<endl;
}
getch();
}