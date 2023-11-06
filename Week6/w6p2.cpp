#include<stdio.h>
int main()
{
	int i;
	char s[50],s1[50];
	printf("Enter the string: ");
	scanf("%s",s);
	while(s[i]!='\0')
	{
	s1[i]=s[i];
	i++;
    }
    printf("Originnal string is: %s\n",s);
    printf("Copied string is: %s",s1);
    return 0;
}
