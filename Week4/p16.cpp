#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter n value: ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	for(j=1;j<i+1;j++)
	printf("%d",j);
	printf("\n");
    }
    return 0;
}
