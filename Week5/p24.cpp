#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("Emter the values for the matrix: \n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&a[i][j]);
	printf("The transpose of the matrix is: \n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
	a[i][j]=a[j][i];
	printf("%d",a[i][j]);
    }
	return 0;
}
