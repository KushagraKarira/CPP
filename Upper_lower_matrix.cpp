//Printing lower and upper triangular matrix
#include<iostream.h>
#include<conio.h>
#definesize 3 //size is length of a square matrix
inti,j;
intmatrix[size][size];
voidlower(void);
voidupper(void);

//Driver function
int main()
{
	clrscr();
	for(inti=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<"Enter matrix on"<<j<<""<<i<<endl;
			cin>>matrix[j][i];
		}
	}
	cout<<"Matrix:"<<endl;
	
	for(inti=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<matrix[j][i]<<endl;
			
		}
	}
cout<<"Lower triangular matrix:\n";
lower();

cout<<"Upper triangular matrix:\n";
upper();
	
getch();
return0;
}
voidlower(void)
{
for(i=0;i<size;i++)
{
for(j=0;j<size;j++)
{
if(i<j)
{
matrix[i][j]=0;
}
cout<<matrix[i][j]<<"";
}
cout<<endl;
}
	for(inti=0;i<size;i++)//Print
	{
		for(j=0;j<size;j++)
		{
			cout<<matrix[j][i]<<endl;
			
		}
	}
}
voidupper(void)
{
inti,j;

for(i=0;i<size;i++)
{
for(j=0;j<size;j++)
{
if(i>j)
{
matrix[i][j]=0;
}
cout<<matrix[i][j]<<"";
}
cout<<endl;
}
	for(inti=0;i<size;i++)//Print
	{
		for(j=0;j<size;j++)
		{
			cout<<matrix[j][i]<<endl;
			
		}
	}
}