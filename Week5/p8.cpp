#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the number of values in the array: \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values: \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	if(a[j]==a[i])
	a[j]=-1;
	for(i=0;i<n;i++)
	if(a[i]!=-1)
	printf("%d",a[i]);
	return 0;
}
