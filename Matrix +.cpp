#include<iostream.h>
#include<conio.h>
#definesize 3 //size is length of a square matrix
int i,j;
int matrix[size][size];
int mat[size][size];
int main()
{
	clrscr();
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			cout<<"Enter matrix on"<<j<<""<<i<<endl;
			cin>>matrix[j][i];
		}
	}
	cout<<"Matrix:"<<endl;
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<matrix[j][i]<<endl;
			
		}
	}
		for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<"Enter matrix on"<<j<<""<<i<<endl;
			cin>>mat[j][i];
		}
	}
	cout<<"Matrix:"<<endl;
	
	for(inti=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<mat[j][i]<<endl;
			
		}
	}
	cout<<" Matrix added : "<<endl;
	for(inti=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<mat[j][i]+matrix[j][i];
			
		}
	}
getch();
return0;
}
