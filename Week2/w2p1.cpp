#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three numbers: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if (a>b && a>c)
	printf("a is the greatest");
	else if (b>c)
	printf("b is the greatest");
	else
	printf("c is the greatest");
	return 0;
}
