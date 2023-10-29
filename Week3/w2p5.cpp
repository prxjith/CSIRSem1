#include <stdio.h>
int main()
{
int i,n,c;
c=0;
printf("Enter the n value: \n");
scanf("%d",&n);
for(i=0; i<=n; i++)
c+=i;
printf("The sum of numbers upto N is: %d",c);
return 0;
}