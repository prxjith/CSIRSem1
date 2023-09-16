#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three technique's points: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if (a>b && a>c)
	printf("a is the best technique");
	else if (b>c)
	printf("b is the best technique");
	else
	printf("c is the best technique");
	return 0;
}
