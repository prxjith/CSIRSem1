#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter the two numbers: ");
	scanf("%f%f",&a,&b);
	c=a*b;
	printf("The product as float is %f",c);
	c=(int)c;
	printf("The product as int is %d",c);
	return 0;
}