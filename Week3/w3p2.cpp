#include<stdio.h>
int main()
{
	int i,n,c;
	printf("Enter the number upto which you want to search: \n");
	scanf("%d",&n);
	c=0;
	for(i=0;i<n;i++)
	{
	if(i%2==0)
	c+=1;
    }
    printf("The number of even number is: %d",c);
}