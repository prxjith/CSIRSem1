#include<stdio.h>
int main()
{
	int n,i,j,c,x;
	printf("Enter the number to be found: \n");
	scanf("%d",&x);
	c=0;
	printf("Enter the number of values in the array: \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values: \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	if(a[i]==x)
	c+=1;
	printf("The number is found %d times",c);
	return 0;
}
	
	
