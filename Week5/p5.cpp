#include<stdio.h>
int main()
{
	int n,i,j,t;
	printf("Enter the number of values in the array: \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values: \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n/2;i++)
	{
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	printf("The reversed array is: \n");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	return 0;
}
