#include<stdio.h>
int main()
{
	int n,i;
	int a[n];
	printf("Enter the number of values in the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(a[i]<a[0])
    a[0]=a[i];
    }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
	return 0;
}
