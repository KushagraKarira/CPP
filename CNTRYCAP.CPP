#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
struct count
{
char cntry[20];
char cap[20];
}
void main()
{
count c[10];
char ctry[20],Cap[20],cho;
int ch,n;
cout<<"enter no of cnrty";
cin>>n;
for(int i=0;i<n;i++)
{
cout<<"enter name country";
gets(c.cntry);
cout<<"enter its capital";
gets(c.cap);
}
do
{
cout<<"1.contry to capital";
cout<<"capital to country";
cout<"enter ur choice";
cin>>ch;
switch(ch)
{
case 1:
cout<<"enter country name";
gets(ctry);
for(int i=0;i<n;i++)
{
if(s

trcmp("c[i].cntry","ctry")==0)
cout<<c[i].cap;
}
break ;
case 2:
cout<<"enter capital";
gets(Cap);
for(i=0;i<n;i++)
{
if(strcmp("c[i].cap","Cap")==0)
cout<<c[i].cntry;
}
break ;
}
cout<<"do you want to continue";
cin>>cho;
}
while(cho=='y' && cho=='Y') ;
getch();
}

