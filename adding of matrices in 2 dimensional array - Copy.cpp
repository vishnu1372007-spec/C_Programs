#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],sum[100][100],r,c,i,j;
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
		for(j=0;j<r;j++)
		{
			printf("\n enter value at b[%d][%d] position",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
