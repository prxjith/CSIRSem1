#include <stdio.h>
#include <string.h>
int main()
{
    int i,x=0;
    char key,s[50];
    printf("Enter the string: ");
    scanf("%s", s);
	printf("Enter the character to be found: ");
    scanf(" %c", &key);
	for(i=0;s[i]!='\0';i++)
    if (s[i]== key)
	{
    x=1;
    break;
    }
    if(x)
	printf("%c is found at %d", key, i);
    else 
	printf("%c is not in the string", key);
    return 0;
}

	
	
	
