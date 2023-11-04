#include <stdio.h>
int main()
{
    int b,d= 0,x=1;
	printf("Enter the binary number: ");
    scanf("%d",&b);
	while(b>0)
	{
        int digit=b%10;
        d=d+digit*x;
        x*=2;
        b=b/10;
    }
    printf("Decimal: %d\n",d);
    return 0;
}