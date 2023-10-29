#include<stdio.h>
int main()
{
	int i,n,t1=0,t2=1,x=0;
	printf("Enter the n value: ");
	scanf("%d",&n);
	x=t1+t2;
	for(i=3;i<=n;i++)
	{
    t1=t2;
    t2=x;
    x=t1+t2;
    }
    printf("The required term is: %d",t2);
}