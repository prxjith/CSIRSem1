#include <stdio.h>
int main() 
{
int d,b=0,x=1;
printf("Enter a decimal number: ");
scanf("%d", &d);
if(d==0)
printf("Binary: 0\n");
else 
{
        while(d>0)
		{
            int r=d%2;
            b=b+r*x;
            d=d/2;
            x=x*10;
        }
		printf("Binary: %d\n",b);
    }
return 0;
}
