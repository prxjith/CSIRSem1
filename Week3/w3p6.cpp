#include <stdio.h>
int main()
{
int i,x,c;
c=1;
printf("Enter the number: \n");
scanf("%d",&x);
for(i=1;i<=x;i++)
c=c*i;
printf("The factorial of the given number is: %d",c);
return 0;
}