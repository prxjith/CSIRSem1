#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],d[3][3],i,j;
	printf("Enter the values for 1st matrix: \n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&a[i][j]);
	printf("Enter the values for 2nd matrix: \n");
    for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&b[i][j]);
	printf("The result after addition is: \n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	c[i][j]=a[i][j]+b[i][j];
	printf("%d ",c[i][j]);
    }
    printf("\n");
    }
    printf("The result after subtraction is: \n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	d[i][j]=a[i][j]-b[i][j];
	printf("%d ",d[i][j]);
    }
    printf("\n");
    }
	return 0;
}
