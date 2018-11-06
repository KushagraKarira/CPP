//To check if a string is palendrom
#include<iostream.h>
#include<conio.h>
#include<strinh.h>
int string[51],palendrom[51]
int main()
{
	clrscr();
	cout<<"Enter palendrom :";
	cin.get(palendrom,51);

	int len=strlen(palendrom); //Variable len initialised with length of the string

	strcpy(string[len],palendrom[len]); //string = palendrom
	int j=0;
	for(int i=len;i>0;i--)
	{
		j++;
		if(strccmp(string[j],palendrom[i])
		{
			cout<<"Congralutations, the string is a palendrom;"
		}
		else
		{
			cout<<"The string is not a palendrom \n Check again \n"<<palendrom[len];
		}
	}
	getch();
	return 0;
}
