#include<stdio.h>
int main()
{
	int a[100][100],sum=0,i,j,n;
	printf("enter array size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\n enter value at a a[%d][%d] position",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i][i];
	}
	printf("\n sum=%d",sum);
	return 0;
}
