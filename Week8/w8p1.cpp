#include <stdio.h>
int main()
{
    FILE *file;
    char data[100];
    printf("Enter data to write to the file: ");
    fgets(data,sizeof(data),stdin);
    file = fopen("INPUT","w");
    if(file==NULL)
	{
    fprintf(stderr,"Error opening file for writing.\n");
    return 1;
    }
	fprintf(file, "%s", data);
    fclose(file);
    file=fopen("INPUT","r");
    if(file==NULL)
	{
    fprintf(stderr, "Error opening file for reading.\n");
    return 1;
    }
    printf("\nData read from the file:\n");
    while (fgets(data, sizeof(data), file) != NULL)
	printf("%s", data);
	fclose(file);
    return 0;
}
