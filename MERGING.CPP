 #include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a1[50],a2[50],r3[50],p1,p2,p3,m,n;
cout<<"enter no of element in a1";
cin>>n;
cout<<"enter no of element in a2";
cin>>m;
for(int i=0;i<n;i++)
{
cout<<"enter element";
cin>>a1[i];
}
for(i=0;i<m;i++)
{
cout<<"enter element";
cin>>a2[i];
}
p1=p2=p3=0;
while(p1<n && p2<m)
{
if(a1[p1]<a2[p2])
r3[p3++]=a1[p1++] ;
else
r3[p3++]=a2[p2++];
}
while(p1<n)
r3[p3++]=a1[p1++];
while(p2<m)
r3[p3++]=a2[p2++];
for(i=0;i<m+n;i++)
{
cout<<r3[i];
}
getch();
}

