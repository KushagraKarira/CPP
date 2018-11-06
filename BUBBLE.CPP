#include<stdiostr.h>
#include<conio.h>
#define size 10
void main()
{
clrscr();
int arr[size];
int i;
for (i=0;i<size;i++)
{
cout<<"Enter Value : "<<endl;
cin>>arr[i];
clrscr();
}
for (i=1;i<size+1;i++)
{
cout<<"Array #"<<i<<" = "<<arr[i]<<endl;
}
getch();
int tmp;
for (i=0;i<size;i++)
{
for (int j=0;j<size;j++)
{
if (arr[j]>arr[j+1])
{
tmp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=tmp;
}
}
}

for (i=0;i<size;i++)
{
cout<<"Array = "<<arr[i]<<endl;
}
getch();

}