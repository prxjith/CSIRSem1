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
	for(i=0;i<n-1;i++)
	for(j=0;j<n-i-1;j++)
	{
		if(a[j]<a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
	printf("The array sorted in descending order is: ");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	return 0;
}
