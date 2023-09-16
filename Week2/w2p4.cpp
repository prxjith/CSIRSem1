#include<stdio.h>
int main()
{
	int b,tier,h,d,t,x;
	printf("Enter the basic salary and the tier of the city of the employee: ");
	scanf("%d",&b);
	scanf("%d",&tier);
	if(tier==1)
	h=0.24;
	else if(tier==2)
	h=0.16;
	else if(tier==3)
	h=0.12;
	else
	printf("Invalid tier");
	d=b*0.44;
	t=b*0.08;
	x=b+d+t+b*h;
	printf("Total salary is %d",x);
	return 0;
}
