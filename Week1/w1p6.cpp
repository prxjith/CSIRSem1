#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the two numbers to be swapped: ");
	scanf("%d",&a);
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a is: %d",a);
	printf("b is: %d",b);
	return 0;
}
