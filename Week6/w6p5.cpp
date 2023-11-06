#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char s[50],r[50];
	printf("Enter the string: ");
	scanf("%s",s);
	int l=strlen(s);
	for(i=0;i<l;i++)
	r[i]=s[l-i-1];
	r[l]='\0';
	printf("Reversed string: %s",r);
	return 0;
}
	
	
