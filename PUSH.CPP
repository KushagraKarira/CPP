#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void push(int stack[], int n, int value,int &top);
void pop(int stack[], int &top) ;
void disp(int stack[], int top);
void main()
{
clrscr();
int stack[50], value, top=-1,N,choice;
char cho;
cout<<"enter size of array"<<endl;
cin>>N;
do{
cout<<"menu"<<endl;
cout<<"1.push"<<endl;
cout<<"2.pop"<<endl;
cout<<"3.display"<<endl;
cout<<"choice"<<endl;
cin>>choice;
switch(choice)
{
case 1:
cout<<"enter value to be pushed"<<endl;
cin>>value;
push(stack,N,value,top);
break;
case 2:
pop(stack,top);
break;
case 3:
disp(stack,top);
break;
}
cout<<"do you want to continue?"<<endl;
cin>>cho;
}while(cho=='Y'||cho=='y');
getch();
}
int value,n;
void push(int stack[], int n, int value,int &top)
{
if(top<n)
stack[++top]=value;
else
cout<<"overflow"<<endl;
}
void pop(int stack[], int &top)
{
if(top<0)
cout<<"stack empty"<<endl;
else
{
cout<<stack[top]<<endl;
top=top-1;
}
}
void disp(int stack[], int top)
{
if(top<0)
cout<<"stack empty"<<endl;
else
{
for(int i=top;top>=n;i--)
cout<<stack[i]<<" "<<endl;
}
}
