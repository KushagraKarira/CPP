#include<iostream.h>
#include<conio.h>
int main()
{
     int a,b,t1,t2,t3,t4;
     a=5126;
     t1=a%10;
     a=a/10;
     t2=a%10;
     a=a/10;
     t3=a%10;
     a=a/10;
     t4=a%10;
     a=a/10;
     b=t1+t2+t3+t4;
     cout<<b;
     return 0;
     getch();
     }