#include<iostream.h>
#include<conio.h>
int check_date(int dd, int no of days);
void main ()
{
clrscr();
int mm,dd,yy,date,valid=1;
cout<<"enter DATE(DD YY MM)";
cin>>dd>>yy>>mm;
if (dd<=0&&dd>31)
if(mm<=12)
if(yy>=0)
valid=0;
else
switch(mm)
case1:
case3:
case5:
case7:
case8:
case10:
case12:
valid=check_date(dd,31)
break;
case4:
case6:
case9:
case11:
valid=check_date(dd,30)
break;
case2:
if (yy%4==0)::(yy%100==0)::(yy%400==0)
valid = check_date(dd,29)
else
valid=check_date(dd,28);
}
if
(valid==1)
cout<<"date is valid";
else
cout<<"date is invalid";
getch ();

int check date(int dd,int no. of days)
{
if (dd<=no.of days)
return 1;
else
return 0;
}
