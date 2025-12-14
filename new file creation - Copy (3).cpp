#include<stdio.h>
int main()
{
	FILE *fp,*fp2;
	char ch;
	int i=0;
	fp=fopen("C:\\c language\\cse13.txt","w");
	while(i<10)
	{
		ch=getchar();
		fputc(ch,fp);
		i++;
	}
	fclose(fp);
	fp=fopen("C:\\c language\\cse13.txt","r");
	fp2=fopen("C:\\c language\\newcse13.txt","w");
	while((ch=fgetc(fp))!=EOF)
	{
		fputc(ch,fp2);
	}
	printf("\n copied successfully");
	fclose(fp);
	fclose(fp2);
	return 0;
}

