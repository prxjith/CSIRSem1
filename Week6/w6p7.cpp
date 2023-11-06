#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50],s2[50];
	printf("Enter the first string: \n");
	scanf("%s",s1);
	printf("Enter the second string: \n");
	scanf("%s",s2);
	if(strcmp(s1,s2))
	printf("Not equal");
	else
	printf("Equal");
	return 0;
}
	
