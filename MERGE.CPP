#include<fstream.h>
#include<string.h>
#include<conio.h>
#include<string.h>

int arr1[9]{ 1,3,5,7,9,11,13,15,17,19 },
    arr2[9]{ 2,4,6,8,10,12,14,16,18,20 },
    arr3[18];

int cnt1=0, cnt2=0, cnt3=0;

void merge()
{
 for (int i=0; i<18; i++)
 {
  if (arr1[cnt1]<arr2[cnt2])
  {
   arr3[cnt3]=arr1[cnt1];
   cnt3++;
   cnt1++;
  }
  else
  {
  arr3[cnt3]=arr2[cnt2];
  cnt3++;
  cnt2++;
  }
 }
}
int main()
{
 clrscr();

 getch();
 return 0;
}