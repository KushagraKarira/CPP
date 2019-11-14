//#include<iostream>
#include<stdio.h>
#define size 10
using namespace std;

int arr[size];

void bubble();
void display();

int main()
{
  for (int i=0;i<size;i++)
  {
    printf("Enter Array : ");
    scanf("%d", &arr[i]);
  }
  printf("Array reicived successfully");

  display();
  bubble();

  printf("Sorted array looks like this : ");
  display();
  return 0;
}
void bubble()
{
  int temp;
  for (int i=0;i<size;i++)
  {
    for (int j=0;j<size;j++)
    {
      if (arr[j+1] < arr[j])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
}
void display()
{
  for (int i=0;i<size;i++)
  printf("Array %d = %d \n", i+1, arr[i]);
}
