#include<stdio.h>
int fact(int n);
int main()
{
	int n,result;
	printf("\n enter n value");
	scanf("%d",&n);
	result=fact(n);
	printf("\n %d factorial is %d", result);
	return 0;
}
int fact
 (int n)
{
	if(n>1)
	{
		return n*fact(n-1);
	}
	else
	{
		return 1;
	}
}

