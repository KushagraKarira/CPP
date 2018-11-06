/* Program to perform the Number system conversions  using UDF. */

#include<iostream.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<conio.h>

int i; long p,a[80];

void decimal_to_binary (long num)
void binary_to_decimal (long num)

void decimal_to_octal (long num)
void octal_to_decimal (long num)

void decimal_to_hexa (long num)
void hexa_to_decimal (char b[80])


void main()
{
  clrscr();
  int ch; char choice,b[80];
  long a;
  cout<<"\n\nChoose from the given menu : ";
do{
  cout<<"\n\n1. Binary to decimal ";
  cout<<"\n\n2. Decimal to binary ";
  cout<<"\n\n\n3. Decimal to octal ";
  cout<<"\n\n4. Octal to decimal  ";
  cout<<"\n\n\n5. Decimal to Hexadecimal ";
  cout<<"\n\n6. Hexadecimal to decimal ";
  cout<<"\n\n\nEnter your choice : ";
  cin>>ch;
	switch(ch)
	{
	    case 1: cout<<"\n\nEnter the binary number : ";
		    cin>>a;
		    binary_to_decimal(a);
		    break;

	    case 2: cout<<"\n\nEnter the decimal number : ";
		    cin>>a;
		    decimal_to_binary(a);
		    break;

	    case 3: cout<<"\n\nEnter the decimal number : ";
		    cin>>a;
		    decimal_to_octal(a);
		    break;

   case 4: cout<<"\n\nEnter the octal number : ";
		    cin>>a;
		    octal_to_decimal(a);
		    break;

	    case 5: cout<<"\n\nEnter the decimal number : ";
		    cin>>a;
		    decimal_to_hexa(a);
		    break;

	    case 6: cout<<"\n\nEnter the Hexadecimal value : ";
		    cin.get();
		    cin.getline(b,80);
		    hexa_to_decimal(b);
		    break;
	}
  cout<<"\n\n\n\nWant to choose again : ";
  cin>>choice;
  }while(choice=='y'||choice=='Y');
getch();
}

void decimal_to_binary(long num)
{  i=0;
   p=num;
	while(num)
	    {
		a[i]=num%2;
		num=num/2;
		i++;
	    }

   cout<<"\n\nBinary equivalent of decimal number "<<p<<" => ";
   for(int k=i-1; k>=0; k--)
   cout<<a[k];
}

void binary_to_decimal(long num)
{  i=0;
   p=num;
   long no=0;
	while(num)
	    {
		a[i]= num%10 * pow(2,i);
		no+=a[i];
		num=num/10;
		i++;
	    }

   cout<<"\n\nDecimal equivalent of binary number "<<p<<" => "<<no;
}

void decimal_to_octal(long num)
{  i=0;
   p=num;
	while(num)
	    {
		a[i]=num%8;
		num=num/8;
		i++;
	    }
   cout<<"\n\nOctal equivalent of decimal number "<<p<<" => ";
   for(int k=i-1; k>=0; k--)
   cout<<a[k];
}

void octal_to_decimal(long num)
{  i=0;
   p=num;
   long no=0;

	while(num)
	    {
		a[i]= num%10 * pow(8,i);
		no+=a[i];
		num=num/10;
		i++;
	    }

   cout<<"\n\nDecimal equivalent of octal number "<<p<<" => "<<no;
}

void decimal_to_hexa(long num)
{  i=0;  p=num;
	while(num)
	    {
		a[i]= num%16;
		num=num/16;
		i++;
	    }
   cout<<"\n\nHexadecimal equivalent of decimal number "<<p<<" => ";
   for(int k=i-1; k>=0; k--)
   { if(a[k]>=0&&a[k]<10)
     cout<<a[k];
     else
     switch(a[k])
	{
	  case 10: cout<<"A"; break;
	  case 11: cout<<"B"; break;
	  case 12: cout<<"C"; break;
	  case 13: cout<<"D"; break;
	  case 14: cout<<"E"; break;
	  case 15: cout<<"F"; break;
	}//end of switch
   } // end of for loop
}

void hexa_to_decimal(char b[80])
{ long d=0;
	for(int l=strlen(b)-1,m=0; l>=0; l--,m++)
	      {
		  if(isdigit(b[l]))
		  {
		   a[l]=b[l];
		   a[l]=1+a[l]-49; // not value of '1' = 49 & '9'=57 in integer
		   a[l]=a[l]*pow(16,m);
		  }
		  else if(isalpha(b[l]))
		  {
		    if(islower(b[l]))
		    b[l]=toupper(b[l]);
			switch(b[l])
			   {	case 'A' : a[l]=10; a[l]=a[l]* pow(16,m); break;
				case 'B' : a[l]=11; a[l]=a[l]* pow(16,m); break;
				case 'C' : a[l]=12; a[l]=a[l]* pow(16,m); break;
				case 'D' : a[l]=13; a[l]=a[l]* pow(16,m); break;
				case 'E' : a[l]=14; a[l]=a[l]* pow(16,m); break;
				case 'F' : a[l]=15; a[l]=a[l]* pow(16,m); break;
				default  : cout<<"\n\nInvalid Hexadecimal number .";

			   }
		  }
		  d+=a[l];
	      }
	cout<<"\n\nThe equivalent decimal number of hexadecimal "<<b<<" => "<<d;
}

















































Output:


Choose from the given menu:


1. Binary to decimal

2. Decimal to binary


3. Decimal to octal

4. Octal to decimal


5. Decimal to Hexadecimal

6. Hexadecimal to decimal


Enter your choice : 1

Enter the binary number : 100011

Decimal equivalent of binary number 100011 => 35



Want to choose again : y



1. Binary to decimal

2. Decimal to binary


3. Decimal to octal

4. Octal to decimal


5. Decimal to Hexadecimal

6. Hexadecimal to decimal


Enter your choice : 2

Enter the decimal number : 35

Binary equivalent of decimal number 35 => 100011


Want to choose again : y



1. Binary to decimal

2. Decimal to binary


3. Decimal to octal

4. Octal to decimal


5. Decimal to Hexadecimal

6. Hexadecimal to decimal


Enter your choice : 3

Enter the decimal number : 25

Octal equivalent of decimal number 25 => 31



Want to choose again : y


1. Binary to decimal

2. Decimal to binary


3. Decimal to octal

4. Octal to decimal


5. Decimal to Hexadecimal

6. Hexadecimal to decimal


Enter your choice : 4

Enter the octal number : 31

Decimal equivalent of octal number 31 => 25


Want to choose again : y


1. Binary to decimal

2. Decimal to binary


3. Decimal to octal

4. Octal to decimal


5. Decimal to Hexadecimal

6. Hexadecimal to decimal


Enter your choice :5

Enter the decimal number : 26

Hexadecimal equivalent of decimal number 26 => 1A



Want to choose again : y



1. Binary to decimal

2. Decimal to binary


3. Decimal to octal

4. Octal to decimal


5. Decimal to Hexadecimal

6. Hexadecimal to decimal


Enter your choice :6

Enter the Hexadecimal value : 1A

The equivalent decimal number of hexadecimal 1A => 26



Want to choose again : N
