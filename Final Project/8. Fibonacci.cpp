/* Wap to print and find the sum of Fibonacci series using recursion. */

#include<iostream>
//#include<conio.h>

int fibonacci(int n);

void main()
{
clrscr();
int n;
cout<<"\n\n Enter the number of terms upto which you want the sum of fibonnaci series : ";
cin>>n;

cout<<"\n\nThe fibonacci series generated is : \n\n";
cout<<"1  1  ";

int s=fibonacci(n);

cout<<"\n\nThe sum of fibonacci series for "<<n<<" terms = "<<s;

getch();

}

int first=1;
int second=1;
int third;
int i=2;
int sum=0;

int fibonacci(int n)
{  if(n==1)
   sum=1;

   else if(n==2)
   sum=2;
				//   n = 1 2 3 4 5
   else if(n>1 && i!=n)                // num = 1 1 2 3 5
   {

   third=first+second;

   cout<<third<<"\t";

   if(i==2)
   sum+=first+second+third;
   else
   sum+=third;

   first=second;
   second=third;

   ++i;

   fibonacci(n);
   }

   return sum;
}
//Output :
// Enter the number of terms upto which you want the sum of fibonnaci series : 5


//The fibonacci series generated is :

//1  1  2  3  5


//The sum of fibonacci series for 5 terms = 12
