#include<stdio.h>
float avg(int arr[],int n)
{
	int i,s=0;
	for(i=0;i<n;i++)
	s+=arr[i];
	float av=s/n;
	return av;
}
int main() 
{
	int i,size;
	printf("Enter the number of values in the array: ");
	scanf("%d",&size);
	int a[size];
	printf("Enter the array values: ");
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
	float x=avg(a,size);
	printf("%f",x);
	return 0;	
}
