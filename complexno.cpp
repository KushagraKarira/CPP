/* WAP in c++ to perform basic operations on the two complex numbers using structures. */

#include<iostream.h>
#include<math.h>
#include<conio.h>
struct complex {
		 int i,r;
	              }x,y;

void add(complex a, complex b)
{
cout<<"\n\n Resultant of addition of complex numbers = "<<a.r+b.r<<" + ("<<a.i+b.i<<")i ";
}

void subtract(complex a,complex b)
{int ch;
l:
   cout<<"\n\n\t1. Subtract complex 2 from complex 1 : ";
   cout<<"\n\n\t12.Subtract complex 1 from complex 2 : ";
   cout<<"\n\n\tEnter your choice : "; cin>>ch;
switch(ch)
{
 case 1 : cout<<"\n\nResultant of subtraction of complex number => "<<"("<<a.r-b.r<<")"<<" + ("<<a.i-b.i<<") i"; break;
 case 2 : cout<<"\n\nResultant of subtraction of complex number => "<<"("<<b.r-a.r<<")"<<" + ("<<b.i-a.i<<") i"; break;
 default : cout<<"\n\nPlease enter desired keyword. "; goto l;
}
}

void multiply(complex a, complex b)
{
cout<<"\n\nResultant of multiplication of complex number => "<<"("<<a.r*b.r-a.i*b.i<<")"<<" + ("<<a.r*b.i+a.i*b.r<<") i";
}

void divide(complex a,complex b)
{int ch;
    l:	cout<<"\n\n\t1. Divide complex 2 from complex 1 : ";
cout<<"\n\n\t2.Divide complex 1 from complex 2 : ";
cout<<"\n\n\tEnter your choice : "; cin>>ch;
switch(ch)
   {
      case 1 : cout<<"\n\nResultant of division of complex number => "<<((a.r*b.r)+(a.i*b.i))/(pow(b.r,2)+pow(b.i,2))
                     <<" + ("<<((a.i*b.r)-(a.r*b.i))/(pow(b.r,2)+pow(b.i,2))<<") i";
	      break;
      case 2 : cout<<"\n\nResultant of division of complex number => "<<((b.r*a.r)+(b.i*a.i))/(pow(a.r,2)+pow(a.i,2))
                     <<" + ("<<((b.i*a.r)-(b.r*a.i))/(pow(a.r,2)+pow(a.i,2))<<") i";
	       break;
     default : cout<<"\n\nPlease enter desired keyword. "; goto l;
   }
}
void main()
{ 
clrscr();
int choice;
char ch;

cout<<"Complex number 1 : ";
cout<<"\n\n\tEnter the real part : "; cin>>x.r;
cout<<"\n\n\tEnter the imaginary part : "; cin>>x.i;
cout<<"\n\n";
cout<<"Coplex number 1 => "<<x.r<<"+("<<x.i<<")i";
cout<<"\n\n\n\nComplex number 2 : ";
cout<<"\n\n\tEnter the real part : "; cin>>y.r;
cout<<"\n\n\tEnter the imaginary part : "; cin>>y.i;
cout<<"\n\n";
cout<<"\n\nComplex number 2 => "<<y.r<<"+("<<y.i<<")i";

do
{cout<<"\n\n\nChoose from the folowing : ";
cout<<"\n\n1. Add two complex numbers ";
cout<<"\n\n2. Subtract two complex numbers ";
cout<<"\n\n3. Multiply two complex numbers ";
cout<<"\n\n4. Divide two complex numbers ";
cout<<"\n\nEnter  your choice : "; cin>>choice;
switch(choice)
{
case 1:add(x,y);  break;
case 2:subtract(x,y); break;
case 3:multiply(x,y); break;
case 4:divide(x,y);   break;
}
cout<<"\n\nWant to Choose again => ";
cin>>ch;
}
while(ch=='y'||ch=='Y');
getch();
}






























Output:  

Complex number 1 :

                 Enter the real part : 2

        	   Enter the imaginary part : 5

Complex number 1 => 2+(5)i



Complex number 2 :

      	  Enter the real part : 1

                 Enter the imaginary part : 3

Complex number 2 => 1+(3)i


Choose from the folowing :

1. Add two complex numbers

2. Subtract two complex numbers

3. Multiply two complex numbers

4. Divide two complex numbers


Enter  your choice : 1

 Resultant of addition of complex numbers = 3 + (8)i


Want to Choose again => Y



Choose from the folowing :

1. Add two complex numbers

2. Subtract two complex numbers

3. Multiply two complex numbers

4. Divide two complex numbers

Enter  your choice : 2

     	   1. Subtract complex 2 from complex 1 :

      	   2. Subtract complex 1 from complex 2 :

        	   Enter your choice : 1

Resultant of subtraction of complex number => (1) + (2) i



Want to Choose again => Y



Choose from the folowing :

1. Add two complex numbers

2. Subtract two complex numbers

3. Multiply two complex numbers

4. Divide two complex numbers

Enter  your choice : 3


Resultant of multiplication of complex number => (-13) + (11) i



Want to Choose again => y



Choose from the folowing :

1. Add two complex numbers

2. Subtract two complex numbers

3. Multiply two complex numbers

4. Divide two complex numbers

Enter  your choice : 4


     	   1. Divide complex 2 from complex 1 :

     	   2. Divide complex 1 from complex 2 :

     	   Enter your choice : 1


Resultant of division of complex number => 1.7 + (-0.1) i

Want to Choose again => N






