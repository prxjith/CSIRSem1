#include<stdio.h>
int nth(int n,int a,int b,int c)
{
    if(n==1)
    return a;
    else if(n==2)
    return b;
    else if(n==3)
    return c;
    else
    return nth(n-1,a,b,c)+nth(n-2,a,b,c)+nth(n-3,a,b,c);
}
int main()
{
    int n,a,b,c;
    printf("Enter the first term : ");
    scanf("%d",&a);
    printf("Enter the second term: ");
    scanf("%d",&b);
    printf("Enter the third term: ");
    scanf("%d",&c);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int result=nth(n, a, b, c);
    printf("The %dth term of the sequence is: %d\n",n,result);
    return 0;
}
