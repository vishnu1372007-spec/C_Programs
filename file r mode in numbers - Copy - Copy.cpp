#include<stdio.h>
int main()
{
	FILE *fp;
	int num; 
	fp=fopen("C:\\Users\\naray\\One drive\\Documents\\number.txt","r");
	while((num=getw(fp))!=EOF)
	{
		printf("%d",num);
	}
	fclose(fp);
	return 0;
}
