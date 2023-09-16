#include<stdio.h>
#include<math.h>
int main()
{
	int n,p;
	printf("Enter the number of units: ");
	scanf("%d",&n);
	if (n>0 && n<=100)
	p=n*2;
	else if (n>=101 && n<200)
	p=n*3;
	else
	p=n*5;
	printf("The price is %d",p);
	return 0;
}
