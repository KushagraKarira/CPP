/* Wap in c++ to read a text file and create a duplicate file by toggling the characters using the concept of data file 
handling. */

#include<fstream.h>
#include<ctype.h>
#include<string.h>
#include<conio.h>
void main()
{
clrscr();

char a[80][80],choice;
int i=0;


cout<<"Enter the strings. Enter  ##  to terminate entering: ";

l1: // label 1

cin.getline(a[i],80);
if(a[i][0]=='#'&&a[i][1]=='#')
   	goto l2;
   
else
{
   i++;
   goto l1;
}



l2:  // label 2
 
fstream str;

str.open("str_n.txt",ios::out);

str<<"The strings are : \n\n";

for(int j=0; j<i; j++)

str<<a[j]<<"\n\n";

str.close();


char b[80][80];


str.open("str_n.txt",ios::in);

for( j=0; j<=(i*2)+1; j++)

str.getline(b[j],80);

str.close();


for(j=0; j<=(i*2)+1; j++)
for(int k=0; k<strlen(b[j]); k++)
{
  if(isalpha(b[j][k]))
  {
	if(islower(b[j][k]))
	     {
		b[j][k]=toupper(b[j][k]);
	     }

	else if(isupper(b[j][k]))
	     {
		b[j][k]=tolower(b[j][k]);
	     }
  }

}


str.open("string_2.txt",ios::out);

str<<"Toggled strings are : \n\n";

for(j=0; j<=(i*2)+1; j++)

str<<b[j]<<"\n\n";

str.close();

getch();
}










































Output:

Enter the strings. Enter ## to terminate entering: 

Eat
an
apple
a day.
Keeps the doctor away.

##

// Under MS-DOS shell

D:\TURBOC3>type str_n.txt  

The strings are :

Eat

an

apple

a day.

Keeps the doctor away.


D:\TURBOC3>type string_2.txt

Toggled strings are :


tHE STRINGS ARE :

eAT

AN

APPLE

A DAY.


kEEPS THE DOCTOR AWAY.




