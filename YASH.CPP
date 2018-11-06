#include<iostream.h>
#include<conio.h>
#include<string.h>
class Garments
{
char gcode [20];
char gtype [10];
int gsize;
char gfabric[10];
float gprice;
float assign ()
{
if (strcmp(gfabric,"cotton")==0)
{
if (strcmp(gtype, "trouser")==0)
gprice =1300;
 if (strcmp  (gtype,"shirt")==0)

gprice=1100;
}
else
{
if (strcmp (gtype,"trouser")==0)
gprice = 1170;
else if (strcmp(gtype,"shirt")==0)
gprice=1000;
}
return gprice;
}
public :
Garments ()

{
strcpy (gcode,"not allocated");
strcpy (gtype, "not allocated ");
strcpy (gfabric,"not allocated");
gsize = 0;
gprice = 0;
}
void input ()
{
cout<<"please enter";
cin>>gcode;
cout<<"please enter";
cin>>gtype;
cout<<"plerse enter";
cin>>gsize;
cout<<"please enter ";
cin>>gfabric;
gprice=assign();
}

void Display()
{
cout <<"gcode:"<<gcode<<endl;
cout <<"gtype :"<<gtype<<endl;
cout<<"gsize :"<<gsize<<endl;
cout<<"gsize :"<<gprice<<endl;
}
};
void main()
{
Garments g;
g.input();
g.Display();
getch();
}


