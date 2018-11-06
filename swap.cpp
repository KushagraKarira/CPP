/* Wap using pointers to swap two integers. */
#include<iostream.h>
#include<conio.h>

void swap_using_pointers(int *, int *);

void main()
{
clrscr();

int a,b;

cout<<"\n\nEnter first  integer : "; cin>>a;
cout<<"\n\nEnter second integer : "; cin>>b;

swap_using_pointers(&a,&b);

cout<<"\n\nNow value of first  integer = "<<a;
cout<<"\n\nNow value of second integer = "<<b;

getch();

}

void swap_using_pointers(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}


Output:


Enter first  integer : 1

Enter second integer : 100


Now value of first  integer = 100

Now value of second integer = 1















