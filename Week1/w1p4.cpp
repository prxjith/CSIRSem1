#include<stdio.h>
int main()
{
	int a,b,c,d,e,p;
	printf("Enter the marks of 5 subjects out of 100: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	p=(a+b+c+d+e)/5;
	printf("The percentage is: %d",p);
	return 0;
}
