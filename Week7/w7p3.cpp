#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char s[100],r[100];
	printf("Enter the string: ");
	scanf("%s",s);
	char*ptr=s;
	char*ptr1=r;
	int l=strlen(s);
	for(i=0;i<l;i++)
	*(ptr1+i)=*(ptr+(l-i-1));
	*(ptr1+l)='\0';
	printf("Reversed string is: %s",r);
	return 0;
}

