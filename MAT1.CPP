#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
 int mat[3][3],i,j;
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 cout<<" Enter values = ";
 cin>>mat[i][j];
 }
 }
 cout<<"\nTransposed matrix =\n ";
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 cout<<mat[j][i]<<' ';
 }cout<<endl;
 }
getch();
}