#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three numbers: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if (a==b && b==c && a==c)
	printf("The three numbers are equal");
	else
	printf("The three numbers are inequal");
	return 0;
}
