#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class PIC
{
private:
int pno;    //Data Member for Picture Number
char category[20]; //Data Member for Picture Category
char location[20];  //Data Member for Exhibition Location
void FixLocation()
{
if(strcmp(category,"Classic")==0);
strcpy(location,"Amina");
if(strcmp(category,"Modern")==0);
strcpy(location,"jim plaq");
if(strcmp(category,"Antique")==0);
strcpy(location,"Ustad Khan");
}
public:
void Enter()
{
cout<<"Enter the Picture Number";
cin>>pno;
gets(category);
void fixlocation();
}
void SeeAll()
{
cout<<"Enter Picture No."<<pno;
puts(category);
}
};
 void main()
 {
 getch();
 }