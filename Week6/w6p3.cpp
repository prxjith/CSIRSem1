#include<stdio.h>
int main()
{
	int i,j,l1;
	char s[100],s1[50],s2[50];
	printf("Enter the first string: \n");
	scanf("%s",s1);
	printf("Enter the second string: \n");
	scanf("%s",s2);
	for(i=0;s1[i]!='\0';i++)
	s[i]=s1[i];
	for(j=0;s2[j]!='\0';j++)
	s[i+j]=s2[j];
	s[i+j]='\0';
	printf("The concatenated string is: %s",s);
    return 0;
}
