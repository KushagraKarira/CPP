#include<fstream.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void count()
{
int count=0;
char ch;
ifstream fin ;
fin.open("para_txt");
while(fin.get(ch))
{
if(isdigit(ch));
count++;
}
fin.close();
}

