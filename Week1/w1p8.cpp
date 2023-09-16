#include<stdio.h>
int main()
{
int x,a,b,c;
printf("Enter number in kilometre");
scanf("%d",&x);
a=x*1000;
b=a*100;
c=b*10;
printf("Number in metres is: %d",a);
printf("Number in centimetres is: %d",b);
printf("Number in millimetres is: %d",c);
}
