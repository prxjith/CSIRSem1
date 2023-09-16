#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the two numbers to be swapped: ");
	scanf("%d",&a);
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("a is %d",a);
	printf("b is %d",b);
	return 0;
}
