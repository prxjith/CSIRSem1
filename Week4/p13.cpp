#include<stdio.h>
int main()
{
	int i,j,s,n;
	printf("Enter n value: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	for(j=0;j<2*(i+1);j++)
	printf("*");
	printf("\n");
    }
    return 0;
}