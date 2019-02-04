/* WAP USING FUNCTION OVERLOADING TO CALCULATE A^B */

#include<iostream.h>
#include<math.h>
#include<conio.h>

int calc(int a, int b)
{
return pow(a,b);
}

float calc(float a, float b)
{
return pow(a,b);
}

float calc(int a, float b)
{
return pow(a,b);
}

float calc(float a, int b)
{
return pow(a,b);
}

void main()
{clrscr();

int P,Q;
float R,S;

cout<<"Enter int P : "; cin>>P;
cout<<"Enter int Q : "; cin>>Q;
cout<<"Enter real R  : "; cin>>R;
cout<<"Enter real S  : "; cin>>S;

cout<<P<<"^"<<Q<<" = "<<pow(P,Q)<<"\n\n";
cout<<P<<"^"<<R<<" = "<<pow(P,R)<<"\n\n";
cout<<R<<"^"<<Q<<" = "<<pow(R,Q)<<"\n\n";
cout<<R<<"^"<<S<<" = "<<pow(R,S);

getch();
}
/*
Output:

Enter int P : 2
Enter int Q : 5
Enter real R  : 2.2
Enter real S  : 5.1
2^5 = 32
2^2.2 = 4.594794
2.2^5 = 51.536326
2.2^5.1 = 55.764227
*/
