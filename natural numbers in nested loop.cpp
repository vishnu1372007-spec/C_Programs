#include<stdio.h>
int main()
{
	int n, i,j,k;
	printf("\n enter n value:");
	scanf("%d",&n);
	for(i=1,k=1;i<=n;i++)
	{
		for(j=1;j<=i;j++,k++)
		{
			printf(" %d",k);
		}
		printf("\n");
	}
	return 0;
}
