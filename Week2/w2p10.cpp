#include<stdio.h>
int main()
{
	int y,m;
	printf("Enter the year and month number");
	scanf("%d",&y);
	scanf("%d",&m);
	if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
	printf("31 days");
	else if (m==4 || m==6 || m==9 || m==11)
	printf("30 days");
	else
	{
		if(y%4==0 &&(y%100!=0 || y%400==0))
		printf("29 days");
		else 
		printf("28 days");
	}
}
