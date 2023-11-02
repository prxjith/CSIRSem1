#include<stdio.h>
int main()
{
long int x,a,b,c;
printf("Enter number in kilometre");
scanf("%ld",&x);
a=x*1000;
b=a*100;
c=b*10;
printf("Number in metres is: %ld",a);
printf("Number in centimetres is: %ld",b);
printf("Number in millimetres is: %ld",c);
}
