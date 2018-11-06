#include<iostream.h>
#include<conio.h>
//0==000
//1==001
//2==010
//3==011
//4==100
//5==101
//6==110
//7==111
main()
{
int oct,bin[6],i=1;
clrscr();
cout<<"Enter Octal value : ";
cin>>oct;
while(oct!=0)
{
if(oct%10==0) bin[i]=000;
else if(oct%10==1) bin[i]=001;
else if(oct%10==2) bin[i]=010;
else if(oct%10==3) bin[i]=011;
else if(oct%10==4) bin[i]=100;
else if(oct%10==5) bin[i]=101;
else if(oct%10==6) bin[i]=110;
else if(oct%10==7) bin[i]=111;
else cout<<"Wrong Choice ! ";
i++;
oct=oct/10;
}
cout<<"Binary = ";
for(i=i-1;i>0;i--)
{
cout<<bin[i]<<" ";
}
getch();
return 0;
}