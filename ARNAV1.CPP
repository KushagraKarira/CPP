#include<iostream.h>
#include<conio.h>
#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
struct stud
{
char name[50];
int rno;
}
void main()
{
int i,n;
stud st;
ofstream of;
of.open("abcabc.dat",ios::binary)
if