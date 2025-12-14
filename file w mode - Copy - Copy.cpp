#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int i=0;
	fp=fopen("file1.txt","w");
	printf("\n enter value");
	while(i<10)
	{
		ch=getchar();
		fputc(ch,fp);
		i++;
	}
	fclose(fp);
	return 0;
}
