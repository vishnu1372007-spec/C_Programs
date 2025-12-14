#include<stdio.h>
int main()
{
	int a[100][100],r,c,i,j;
	printf("\n enter row and column sizes");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\n enter value at a[%d][%d] position",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	printf("transpose of a matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
