#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],d[3][3],i,j;
	printf("Enter the values of matrix a: \n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
	scanf("%d",&a[i][j]);
    }
    for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	printf("%d",a[i][j]);
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
	printf("Enter the values of matrix b: \n");
	scanf("%d",&b[i][j]);
    }
    for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("%d",b[i][j]);
		c[i][j]=a[i][j]+b[i][j];
	    printf("%d",c[i][j]);
	    d[i][j]=a[i][j]+b[i][j];
	    printf("%d",d[i][j]);
    }
	return 0;
}
