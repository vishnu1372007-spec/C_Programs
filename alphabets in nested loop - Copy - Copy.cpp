#include<stdio.h>
int main()
{
	int n;
	char i,j;
	printf("\n enter n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %c",'A' + j - 1);
		}
		printf("\n");
	}
	return 0;
}
