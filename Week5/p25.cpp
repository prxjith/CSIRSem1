#include<stdio.h>
int main()
{
	int a[3][3],i,j,s;
	s=0;
	printf("Emter the values for the matrix: \n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
	if(i+j==2)
	s+=a[i][j];
    }
    printf("The sum of the right diagonal elements is: %d",s);
	return 0;
}
