#include<stdio.h>
int main()
{
	int a,b,c,d,e,p;
	printf("Enter the five subject marks");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	p=(a+b+c+d+e)/5;
	printf("The overall score is %d",p);
	if (p>=90)
	printf("A grade");
	else if(p>=80 && p<90)
	printf("B grade");
	else if(p>=70 && p<80)
	printf("C grade");
	else if(p>=60 && p<70)
	printf("D grade");
	else if(p>=40 && p<60)
	printf("E grade");
	else
	printf("F grade");
}
