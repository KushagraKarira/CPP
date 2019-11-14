#include<stdio.h>
//#include<conio.h>
#include<math.h>
int Bin2Dec(int n);
void Dec2Bin(int m);

int main()
{
  int dec=0;
  int bin=0;
  int ch;
  //clrscr();
  do
  {
    printf("\t\t\nMenu\n");
    printf("\n\n1.Binary to Decimal \n");
    printf("\n\n2.Decimal to Binary \n");
    printf("\n\n3.Exit\n");
    printf("\n\nEnter your Choice : ");
    scanf("%d", &ch );

    switch(ch)
    {
      case 1:
      printf("Enter the Binary Number");
      scanf("%d", &bin);
      dec=Bin2Dec(bin);
      printf("Decimal = %d", dec);
      break;

      case 2:
      printf("Enter the Decaimal Number");
      scanf("%d", &dec);
      Dec2Bin(dec);
      break;
    }
  }while(ch!=3);
  //getch();
  return 0;
}
void Dec2Bin(int m)
{
  int n;
  while(m!=0)
  {
    n=m%2;
    printf("%d", n );
    m/=2;
  }
  //getch();
}
int Bin2Dec(int n)
{
  int m,i=0;
  int res=0;
  while(n!=0)
  {
    m=n%10;
    res+=m*pow(2,i++);
    n=n/10;
  }
  return res;
}
