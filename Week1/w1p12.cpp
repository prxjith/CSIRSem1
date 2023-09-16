#include<stdio.h>
int main()
{
	float x,y;
	printf("Enter the number in days: ");
	scanf("%f",&x);
	y=x/365;
	printf("The number in years is: %f",y);
	return 0;
}