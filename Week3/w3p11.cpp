#include<stdio.h>
int main()
{
	int n,n1,rev=0,rem;
	printf("Enter the number: \n");
	scanf("%d",&n);
	n1=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(rev==n1)
	printf("The given number is a palindrome");
	else
	printf("The given number is not a palindrome");
}