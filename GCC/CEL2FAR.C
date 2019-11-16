//#include<iostream.h>
#include<stdio.h>
void celsius();
void fahrenheit();

int main()
{
	celsius();
	fahrenheit();
	return 0;
}

void celsius()
{
	float far,cel;
	printf("Enter Temprature in Fahrenheit : ");
	scanf("%f", &far );
	cel = 0.555*(far-32); //problem here
	printf("Temprature in Celsius : %f ", cel);
}
void fahrenheit()
{
	float cel,far;
	printf("Enter Temprature in Celsius : ");
	scanf("%f", &cel );
	far = (cel*1.8)+32; //problem here
	printf("Temprature in Fahrenheit : %f ", far);
}
