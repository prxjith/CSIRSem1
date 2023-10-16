#include<stdio.h>
int main()
{
	int min,max,avg,sum=0,n,i;
	int a[n];
	printf("Enter the number of values in the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    min=a[0];
    max=a[0];
    for(i=0;i<n;i++)
    {
    if(a[i]>max)
    max=a[i];
    if(a[i]<min)
    min=a[i];
    sum+=a[i];
    }
    avg=sum/n;
    printf("Maximum is %d",max);
    printf("Minimum is %d",min);
    printf("Average is %d",avg);
	return 0;
}
