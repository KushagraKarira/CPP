#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,mat1[3][3],mat2[3][3],sum[3][3];
cout<<"enter values for first matrix=";
for ( i=0;i<3;i++)
{
for ( j=0;j<3;j++)
{
cin>>mat1[i][j];
}
}
cout<<"enter values for second matrix=";
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
cin>>mat2[i][j];
}
}
for( i=0;i<3;i++)
{
for( j=0;j<3;j++)
{
sum[i][j]=mat1[3][3] + mat2[3][3];
}}
cout<<endl;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<sum[i][j];
}
}
cout<<endl;
getch();
}
