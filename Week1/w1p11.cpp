#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,s,c,x,y;
	printf("Enter the principle amount, rate of interest and time in years: ");
	scanf("%f",&p);
	scanf("%f",&r);
	scanf("%f",&t);
	s=p+((p*r*t)/100);
	x=(1+(r/100));
	y=pow(x,t);
	c=p*y;
	printf("The amount after adding simple interest is: %f",s);
	printf("The amount after adding complex interest is: %f",c);
	return 0;
}