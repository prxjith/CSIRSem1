#include <stdio.h>
int main()
{
int x,c=0;
printf("Enter the number: \n");
scanf("%d",&x);
while(x!=0)
{
x=x/10;
c+=1;
}
printf("The number of digits is: %d",c);
return 0;
}