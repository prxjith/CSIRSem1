#include<stdio.h>
int main()
{
	FILE *fp,*fe,*fo;
	fp=fopen("DATA.txt","w+");
	fe=fopen("EVEN.txt","w+");
	fo=fopen("ODD.txt","w+");
	int i,n,x,e=0,o=0;
	printf("Enter number of integers to be entered into the file: ");
	scanf("%d",&n);
	printf("Enter integers to be entered in file: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		putw(x,fp);
	}
	rewind(fp);
	while((x=getw(fp))!=EOF)
	{
		if(x%2==0)
		putw(x,fe);
		else
		putw(x,fo);
	}
	rewind(fo);
	rewind(fe);
	printf("Even: \n");
	while((x=getw(fe))!=EOF)
	printf("%d \n",x);
	printf("Odd: \n");
	while((x=getw(fo))!=EOF)
	printf("%d \n",x);
	fclose(fp);
	fclose(fe);
	fclose(fo);
	return 0;
}





	
	
	
