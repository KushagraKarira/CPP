#include<iostream.h>
#include<conio.h>
#include<math.h>
int conv(long long);
void main()
{
	long long bin;
	clrscr();
	cout<<"\n enter a binary number :";
	cin>>bin;
	cout<<bin<<"in octal ="<<conv(bin);
	getch();
}
int conv(long long bin)
{
	int oct=0, dec=0, i=0;
	while(bin!=0)
	{
		dec+=bin*pow(2,i);
		i++;
		bin/=10;
	}
	i=1;
	while(dec!=0)
	{
		oct+=(dec%8)*i;
		dec/=8;
		i*=10;
	}
	return oct;
}