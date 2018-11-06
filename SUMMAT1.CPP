#include<iostream.h>
#include<conio.h>
void main()
{                       clrscr();
 int mat1[3][3],mat2[3][3],i,j,summat[3][3];
 cout<<"Enter Matrix A \n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {cout<<"Enter value = ";
  cin>>mat1[i][j];}
 }          cout<<"\nEnter matrix B \n";
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 cout<<"Enter value = ";cin>>mat2[i][j];
 }
 }
 cout<<"Sum of Matrices is = \n";
 for(i=0;i<3;i++)
 {         summat[i][j]=0;
  for(j=0;j<3;j++)
  {summat[i][j]=mat1[i][j]+mat2[i][j];
  cout<<summat[i][j]<<' ';
 }                      cout<<endl;
 }getch();}