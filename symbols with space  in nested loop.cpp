#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("\n enter n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i+1;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}
