#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
char word[31];
int words=0,space=0;
int main()
{
clrscr();
cout<<"Enter String : ";
gets(word);
for(int i=0;i<strlen(word)+1;i++)
{
if(word==" ")
space++;
else
words++;
}
cout<<"Total Spaces = "<<space;
cout<<"Total Words  = "<<words;
getch();
return 0;
}