
 #include<iostream.h>
 #include<conio.h>
 void Push(int[],int size,int val, int&top);
 void Pop(int[], int&top);
 void Disp(int[],int size);
 void main()
 {

clrscr();
int stack[50],size;
cout<<"Enter the no. of elements you want to enter =";
cin>>size;
int i =-1;
char ch;
do{
cout<<"\n menu:  \n 1push  \n 2pop  \n 3display";
int opt;
int val;
cin>>opt;
switch(opt)
{
case 1 : cin>>val;
	 push(stack,size,val,i);
	 break;
case 2 :cin>>val;
	pop(stack,i);
	break;
case 3:cin>>val;
       disp(stack,size)
       break;
default: cout<<"not valid";  i++;
}
cout<<"want to do more";
cin>>ch;
}
while(ch=='y'||ch=='Y')
getch();
}
push(int stack[];int size;int val;int&top)
{
if(top<size)
cout<<"its a overflow situation,cant add";
else
{
top++;
stack[++top}=val;
}
}
pop(int stack[],int&top);
{
if(top<0)
cout<<"its an overflow condition ..cant delete";
else{
cout<<stack<top<<"its gonna be delete ";
top--;
}}
disp(int stack[],int top)
 {
 for(int i=top;i>=0;i++)
 cout<<"stack[i]"<<" ";
 }