#include<iostream.h>
#include<conio.h>
struct student
{
    int marks[5];
    int rlno;
    char name[20];
    int clss;
}detail;
void main()
{    char grade;
     clrscr();
     cout<<"enter the detail of student:";
     cout<<"enter the name  :";
     gets(detail.name);
     cout<<"marks";
     int i;
     int total=0;
     for(i=0;i<5;i++)
     {
       cout<<"subject "<<i+1<<"=";
       cin>>detail.marks[i];
       total+=detail.marks[i];
      }
      cout<<"grade=";
      if (total>=420)
	cout<<"A";
	if (total>=





}