#include<stdio.h>
int main()
{
	int n,i,j,t;
	printf("Enter an even number of values in the array: \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values: \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i=i+2)
	{
		t=a[i+1];
		a[i+1]=a[i];
		a[i]=t;
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	return 0;
}
