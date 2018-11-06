/* Program to check validity of date using structures. */
#include<iostream.h>
#include<process.h>
#include<dos.h>
#include<conio.h>

int d31[]={1,3,5,7,8,10,12};
int d30[]={4,6,9,11,4,6};
int flag=0;
int i;

struct date_ { int dd,mm,yy;
	     } d;

void date_validity(date_ d)
{
   if(d.dd>0&&d.dd<=31)
	{
	  if (d.mm>0&&d.mm<=12)
	      {
		if(d.yy)
		   {
		     if(d.mm==2)//feb check
		       {
			 if (d.dd>0&&d.dd<=28)
			     {
				cout<<"Date "<<d.dd<<"/"<<d.mm<<"/"<<d.yy<<" is valid.";
			     }

			 else if( (d.yy%400==0) || (d.yy%100!=0&&d.yy%4=00) )//leap check
			     {
				if(d.dd>0&&d.dd<=29)
				cout<<"Date "<<d.dd<<"/"<<d.mm<<"/"<<d.yy<<" is valid.";
			     }//end of leap check

			 else
cout<<"Date "<<d.dd<<"/"<<d.mm<<"/"<<d.yy<<" is INVALID. In Leap  “               
         <<” year  February has maximum of 29 days.";
				getch();
				exit(0);
		       }// end of feb check


		     else
			 {
			  for(i=0; i<7; i++)//for loop beginning
			   {
			     flag=0;
		                       if(d.dd<31)
				{
  if(d.mm==d30[i])
				   {
				     cout<<"Date "<<d.dd<<"/"<<d.mm<<"/"<<d.yy<<" is valid."; getch();exit(0);
				     flag=1;
				     break;
				   }
				}


			         else  
if(d.mm==d31[i])
				   {
				     flag=2;
				     cout<<"Date "<<d.dd<<"/"<<d.mm<<"/"<<d.yy<<" is valid."; getch();exit(0);

				   }

			   }//end of for loop

				  if(flag==0)
				  {
				     cout<<"Date "<<d.dd<<"/"<<d.mm<<"/"<<d.yy<<" is INVALID. Check month.";
				     getch();
				     exit(0);
				  }

			   }//end of else block

			}//end of d.yy check block

		   else
		   cout<<"Date "<<d.dd<<"/"<<d.mm<<"/"<<d.yy<<" is INVALID. Check year.";   getch();exit(0);

		}//end of d.mm check block
	  else
	  cout<<"Date "<<d.dd<<"/"<<d.mm<<"/"<<d.yy<<" is INVALID. Check month.";   getch();exit(0);
	}//end of d.dd block
   else
   cout<<"Date "<<d.dd<<"/"<<d.mm<<"/"<<d.yy<<" is INVALID. Check day."; getch();exit(0);
}

void main()
{clrscr();
cout<<"-------------------------------* Date Checking *--------------------------------\n\n";
cout<<"Enter day of date : ";
cin>>d.dd;
cout<<"\n\nEnter month of date : ";
cin>>d.mm;
cout<<"\n\nEnter year of date : ";
cin>>d.yy;

cout<<"\n\n\n\t\t\tChecking validity of date.\n\n";
delay(1000);
cout<<"\n\n";

date_validity(d);

getch();

}
