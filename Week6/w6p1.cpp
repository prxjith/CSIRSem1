#include<stdio.h>
int main()
{
	int i=0,c=0;
	char s[50];
	printf("Enter the string: ");
	scanf("%s",s);
	while(s[i]!='\0')
	{
	c+=1;
	i++;
    }
    printf("Length of the string is: %d",c);
    return 0;
}
