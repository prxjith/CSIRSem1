#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three side lengths of the triangle: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if (a==b && b==c && a==c)
	printf("The triangle is equilateral");
	else if (a==b || b==c || a==c)
	printf("The triangle is isosceles");
	else
	printf("The triangle is scalene");
	return 0;
}
