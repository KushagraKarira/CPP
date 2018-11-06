#include<iostream.h>

#include<stdiostr.h>
#include<conio.h>
#define size 5
int temp;
int swap(int&a,int&b) {temp=a; a=b; b=temp; return (a,b);}
struct stud
{
   int rno;
   char name[10];
   int marks;
   }stud[size];
int main()
{  clrscr();
   for(int i=0;i<size;i++)
   {
   cout<<"Enter roll no :";
   cin>>stud[i].rno;
   cout<<"Enter name :";
   gets(stud[i].name);
   cout<<"Enter marks :";
   cin>>stud[i].marks;
   }
   for(i=0;i<size;i++)
   {
    cout<<stud[i].rno<<endl;
    cout<<stud[i].name<<endl;
    cout<<stud[i].marks<<endl;
   }
   cout<<"Sorted"<<endl;
   for (i=0;i<size;i++)
   {
   for (int j=0;j<size;j++)
   {
   if(stud[i].marks[i+1] < stud[i].marks)
   {
   swap(stud[j],stud[j+1]);
   }
   }
   }
    for(i=0;i<size;i++)
   {
    cout<<stud[i].rno<<endl;
    cout<<stud[i].name<<endl;
    cout<<stud[i].marks<<endl;
   }
   getch();
   return 0;
   }












