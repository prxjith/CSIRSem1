#include<stdio.h>
int main()
{
	int n,n1,sum=0,rem;
	printf("Enter the number: \n");
	scanf("%d",&n);
	n1=n;
	while(n!=0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	printf("The sum of the digits of the number is %d",sum);
}